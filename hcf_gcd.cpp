//WAP to print the GCD/HCF of 2 numbers
#include <iostream>
using namespace std;

int main() {
    int a, b, gcd = 1;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int minNum = (a < b) ? a : b;

    for (int i = 1; i <= minNum; ++i) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    cout << "GCD/HCF is: " << gcd << endl;
    return 0;
}
