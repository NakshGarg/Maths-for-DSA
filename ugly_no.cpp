// An ugly number is a positive integer which does not have a prime factor other 
// than 2, 3, and 5.Given an integer n, return true if n is an ugly number.

#include<iostream>
using namespace std;
bool isUgly(int n) {
    if (n <= 0) {
        return false; 
    }
    while (n % 2 == 0) {
        n = n / 2;
    }
    while (n % 3 == 0) {
        n = n / 3;
    }
    while (n % 5 == 0) {
        n = n / 5;
    }

    // If the final result is 1, it's an ugly number
    if (n == 1) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Call the isUgly function and print result
    if (isUgly(number)) {
        cout << number << " is an Ugly Number." << endl;
    } else {
        cout << number << " is Not an Ugly Number." << endl;
    }

    return 0;
}