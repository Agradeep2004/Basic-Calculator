#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

void displayMenu() {
    cout << "\nAdvanced Calculator" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Power" << endl;
    cout << "6. Square Root" << endl;
    cout << "7. Factorial" << endl;
    cout << "8. Logarithm (Base 10)" << endl;
    cout << "9. Trigonometric Functions" << endl;
    cout << "10. Exit" << endl;
}

double getInput(const string &prompt) {
    double value;
    cout << prompt;
    while (!(cin >> value)) {
        cout << "Error: Invalid input! Please enter a numeric value: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return value;
}

int main() {
    while (true) {
        displayMenu();

        int choice;
        cout << "\nEnter your choice (1-10): ";
        cin >> choice;

        if (cin.fail() || choice < 1 || choice > 10) {
            cout << "Error: Invalid choice! Please enter a number between 1 and 10." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (choice == 10) {
            cout << "Exiting calculator. Goodbye!" << endl;
            break;
        }

        switch (choice) {
            case 1: { // Addition
                double a = getInput("Enter the first number: ");
                double b = getInput("Enter the second number: ");
                cout << "Result: " << (a + b) << endl;
                break;
            }
            case 2: { // Subtraction
                double a = getInput("Enter the first number: ");
                double b = getInput("Enter the second number: ");
                cout << "Result: " << (a - b) << endl;
                break;
            }
            case 3: { // Multiplication
                double a = getInput("Enter the first number: ");
                double b = getInput("Enter the second number: ");
                cout << "Result: " << (a * b) << endl;
                break;
            }
            case 4: { // Division
                double a = getInput("Enter the numerator: ");
                double b = getInput("Enter the denominator: ");
                if (b == 0) {
                    cout << "Error: Division by zero!" << endl;
                } else {
                    cout << "Result: " << (a / b) << endl;
                }
                break;
            }
            case 5: { // Power
                double base = getInput("Enter the base: ");
                double exponent = getInput("Enter the exponent: ");
                cout << "Result: " << pow(base, exponent) << endl;
                break;
            }
            case 6: { // Square Root
                double a = getInput("Enter the number: ");
                if (a < 0) {
                    cout << "Error: Square root of a negative number is not real!" << endl;
                } else {
                    cout << "Result: " << sqrt(a) << endl;
                }
                break;
            }
            case 7: { // Factorial
                int n = static_cast<int>(getInput("Enter a non-negative integer: "));
                if (n < 0) {
                    cout << "Error: Factorial of a negative number is undefined!" << endl;
                } else {
                    long long factorial = 1;
                    for (int i = 1; i <= n; ++i) {
                        factorial *= i;
                    }
                    cout << "Result: " << factorial << endl;
                }
                break;
            }
            case 8: { // Logarithm
                double a = getInput("Enter the number: ");
                if (a <= 0) {
                    cout << "Error: Logarithm is undefined for zero or negative numbers!" << endl;
                } else {
                    cout << "Result: " << log10(a) << endl;
                }
                break;
            }
            case 9: { // Trigonometric Functions
                cout << "\nTrigonometric Functions:" << endl;
                cout << "1. Sine" << endl;
                cout << "2. Cosine" << endl;
                cout << "3. Tangent" << endl;
                int trigChoice;
                cout << "Enter your choice (1-3): ";
                cin >> trigChoice;

                if (cin.fail() || trigChoice < 1 || trigChoice > 3) {
                    cout << "Error: Invalid choice!" << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    break;
                }

                double angle = getInput("Enter the angle in degrees: ");
                double radians = angle * M_PI / 180.0;

                if (trigChoice == 1) {
                    cout << "Result: " << sin(radians) << endl;
                } else if (trigChoice == 2) {
                    cout << "Result: " << cos(radians) << endl;
                } else if (trigChoice == 3) {
                    cout << "Result: " << tan(radians) << endl;
                }
                break;
            }
            default:
                cout << "Error: Unknown error occurred!" << endl;
        }
    }

    return 0;
}
