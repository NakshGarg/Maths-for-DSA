// Write an algorithm to determine if a number n is happy.
// A happy number is a number defined by the following process:
// Starting with any positive integer, replace the number by the sum of the squares of its digits.
// Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
// Those numbers for which this process ends in 1 are happy.
// Return true if n is a happy number, and false if not.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int temp, digit, sum;
    
    // Loop to check for happy number
    while (n != 1 && n != 4) { // 4 is known to be the start of the unhappy number loop
        sum = 0;
        temp = n;
        while (temp > 0) {
            digit = temp % 10;
            sum += digit * digit;
            temp /= 10;
        }
        n = sum;
    }

    if(n == 1){
        cout << "Happy Number";
    } else {
        cout << "Not Happy Number";
    }

    return 0;
} 