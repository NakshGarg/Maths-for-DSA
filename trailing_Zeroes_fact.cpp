// Given an integer n, return the number of trailing zeroes in n!.

//BRUTE FORCE APPROACH

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     long long fact = 1;
//     for (int i = 2; i <= n; i++) {
//         fact *= i;
//     }
//     int zeroes = 0;
//     while (fact % 10 == 0) {
//         zeroes++;
//         fact /= 10;
//     }

//     cout << "Number of trailing zeroes in " << n << "! is: " << zeroes << endl;
//     return 0;
// }
//OPTIMAL APPROACH

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int count = 0;
    for (int i = 5; n / i >= 1; i *= 5) {
        count += n / i;
    }

    cout << "Number of trailing zeroes in " << n << "! is: " << count << endl;
    return 0;
}
