#include <iostream>
using namespace std;

int main() {
    double base;
    int exponent;
    double result = 1;

    cout << "Enter base: ";
    cin >> base;

    cout << "Enter exponent (positive integer): ";
    cin >> exponent;

    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }

    cout << base << "^" << exponent << " = " << result << endl;

    return 0;
}
