#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2;

    cout << "Menu-driven Calculator" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (choice) {
        case 1:
            cout << "Sum: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Difference: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Product: " << num1 * num2 << endl;
            break;
        case 4:
            if (num2 != 0) {
                cout << "Quotient: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero" << endl;
            }
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }

    return 0;
}
