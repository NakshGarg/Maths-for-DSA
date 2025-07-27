// Given an integer n, return true if it is a power of four. Otherwise, return false.
// An integer n is a power of four, if there exists an integer x such that n == 4x.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    long long x = 1; // 4^0 = 1
    bool flag = false;

    while (x <= n) {
        if (x == n) {
            flag = true;
            break;
        }
        x *= 4;
    }

    if (flag)
        cout << "YES, it's a power of 4." << endl;
    else
        cout << "NO, it's not a power of 4." << endl;

    return 0;
}
