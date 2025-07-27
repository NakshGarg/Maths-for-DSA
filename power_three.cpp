#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 0) {
        cout << "NO, it's not a power of 3." << endl;
        return 0;
    }

    while (n % 3 == 0) {
        n /= 3;
    }

    if (n == 1)
        cout << "YES, it's a power of 3." << endl;
    else
        cout << "NO, it's not a power of 3." << endl;

    return 0;
}
