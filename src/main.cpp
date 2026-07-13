#include "Calculator.h"
#include <iostream>
#include <limits>

using namespace std;

void printMenu()
{
    cout << "\n=============================\n";
    cout << "      C++ Calculator\n";
    cout << "=============================\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Modulus\n";
    cout << "6. Power\n";
    cout << "7. Square Root\n";
    cout << "8. Clear Screen\n";
    cout << "9. Exit\n";
    cout << "Choose an option: ";
}

double readNumber(const string& message)
{
    double value;

    while (true)
    {
        cout << message;

        if (cin >> value)
            return value;

        cout << "Invalid input. Please enter a number.\n";

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

int main()
{
    Calculator calc;

    int choice;

    while (true)
    {
        printMenu();

        if (!(cin >> choice))
        {
            cout << "Invalid choice.\n";

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        try
        {
            double a, b;

            switch (choice)
            {
            case 1:
                a = readNumber("First Number : ");
                b = readNumber("Second Number: ");
                cout << "Result = " << calc.add(a, b) << endl;
                break;

            case 2:
                a = readNumber("First Number : ");
                b = readNumber("Second Number: ");
                cout << "Result = " << calc.subtract(a, b) << endl;
                break;

            case 3:
                a = readNumber("First Number : ");
                b = readNumber("Second Number: ");
                cout << "Result = " << calc.multiply(a, b) << endl;
                break;

            case 4:
                a = readNumber("Dividend : ");
                b = readNumber("Divisor  : ");
                cout << "Result = " << calc.divide(a, b) << endl;
                break;

            case 5:
            {
                int x = static_cast<int>(readNumber("First Integer : "));
                int y = static_cast<int>(readNumber("Second Integer: "));
                cout << "Result = " << calc.modulus(x, y) << endl;
                break;
            }

            case 6:
                a = readNumber("Base     : ");
                b = readNumber("Exponent : ");
                cout << "Result = " << calc.power(a, b) << endl;
                break;

            case 7:
                a = readNumber("Enter Number : ");
                cout << "Result = " << calc.squareRoot(a) << endl;
                break;

            case 8:
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif
                break;

            case 9:
                cout << "\nThank you for using Calculator!\n";
                return 0;

            default:
                cout << "Please select a valid option.\n";
            }
        }
        catch (const exception& e)
        {
            cout << "Error: " << e.what() << endl;
        }
    }
}