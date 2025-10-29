#pragma once
#include <iostream>
#include "clsScreen.h"

using namespace std;

class clsCurrencyExchangeMainScreen : protected clsScreen
{
    enum enCurrenciesMainMenueOptions
    {
        eListCurrencies = 1, eFindCurrency = 2, eUpdateCurrencyRate = 3,
        eCurrencyCalculator = 4, eMainMenue = 5
    };

    static short _ReadCurrenciesMainMenueOption()
    {
        cout << setw(37) << left << "" << "Choose what do you want to do? [1 to 5]? ";
        short Choice = clsInputValidate::ReadShortNumberBetween(1, 5, "Enter Number between 1 to 5? ");
        return Choice;
    }

    static void _GoBackToCurrencyExchangeMenue()
    {
        cout << "\n\nPress any key to go back to Currency Exchange Menue...";

        system("pause>0");
        ShowCurrenciesMenue();
    }

    static void _ShowCurrenciesListScreen()
    {
        cout << "\nList Currencies Screen will be here.\n";
    }

    static void _ShowFindCurrencyScreen()
    {
        cout << "\nFind Currency Screen will be here.\n";
    }

    static void _ShowUpdateCurrencyRateScreen()
    {
        cout << "\nUpdate Rate Screen will be here.\n";
    }

    static void _ShowCurrencyCalculatorScreen()
    {
        cout << "\nCurrency Calculator Screen will be here.\n";
    }

    static void _PerformCurrenciesMainMenueOption(enCurrenciesMainMenueOptions CurrenciesMainMenueOption)
    {
        switch (CurrenciesMainMenueOption)
        {
        case clsCurrencyExchangeMainScreen::eListCurrencies:
            system("cls");
            _ShowCurrenciesListScreen();
            _GoBackToCurrencyExchangeMenue();
            break;

        case clsCurrencyExchangeMainScreen::eFindCurrency:
            system("cls");
            _ShowFindCurrencyScreen();
            _GoBackToCurrencyExchangeMenue();
            break;

        case clsCurrencyExchangeMainScreen::eUpdateCurrencyRate:
            system("cls");
            _ShowUpdateCurrencyRateScreen();
            _GoBackToCurrencyExchangeMenue();
            break;

        case clsCurrencyExchangeMainScreen::eCurrencyCalculator:
            system("cls");
            _ShowCurrencyCalculatorScreen();
            _GoBackToCurrencyExchangeMenue();
            break;

        case clsCurrencyExchangeMainScreen::eMainMenue:
            // Do Nothing here, the Main Screen will handle it :-)
            break;
        }
    }

public:

    static void ShowCurrenciesMenue()
    {
        system("cls");
        _DrawScreenHeader("   Currency Exchange Main Screen");

        cout << setw(37) << left << "" << "===========================================\n";
        cout << setw(37) << left << "" << "\t\tCurrency Exchange Menue\n";
        cout << setw(37) << left << "" << "===========================================\n";
        cout << setw(37) << left << "" << "\t[1] List Currencies.\n";
        cout << setw(37) << left << "" << "\t[2] Find Currency.\n";
        cout << setw(37) << left << "" << "\t[3] Update Rate.\n";
        cout << setw(37) << left << "" << "\t[4] Currency Calculator.\n";
        cout << setw(37) << left << "" << "\t[5] Main Menue.\n";
        cout << setw(37) << left << "" << "===========================================\n";

        _PerformCurrenciesMainMenueOption(enCurrenciesMainMenueOptions(_ReadCurrenciesMainMenueOption()));
    }
};

