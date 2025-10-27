#include <iostream>
#include "clsCurrency.h"

using namespace std;

void PrintCurrency(clsCurrency& Currency)
{
    cout << "\nCurrency Card:\n";
    cout << "_________________________________\n";
    cout << "\nCountry     : " << Currency.Country();
    cout << "\nCode        : " << Currency.CurrencyCode();
    cout << "\nName        : " << Currency.CurrencyName();
    cout << "\nRate (1$) = : " << Currency.Rate();
    cout << "\n_______________________________\n";
}

int main()
{
    clsCurrency Currency1 = clsCurrency::FindByCurrencyCode("AE");

    if (Currency1.IsEmpty())
    {
        cout << "\nCurrency Is Not Found!\n";
    }
    else
    {
        PrintCurrency(Currency1);
    }

    clsCurrency Currency2 = clsCurrency::FindByCountry("A");

    if (Currency2.IsEmpty())
    {
        cout << "\nCurrency Is Not Found!\n";
    }
    else
    {
        PrintCurrency(Currency2);
    }

    cout << "\nCurrency 1 After updating Rate :\n";
    Currency1.UpdateRate(3.7);
    PrintCurrency(Currency1);

    return 0;
}
