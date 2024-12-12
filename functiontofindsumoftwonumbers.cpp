#include <iostream>
using namespace std;

// Function to find the sum of two numbers
int findSum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int sum = findSum(num1, num2);
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;

    return 0;
}
