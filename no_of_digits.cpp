//Given a number n, find out and return the no of digita in that number
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    // int n, count = 0;
    cout << "Enter a number: ";
    cin >> n;
    // if (n == 0) {
    //     count = 1;
    // } else {
    //     while (n > 0) {
    //         count++;
    //         n = n / 10;
    //     }
    // }

    //ANOTHER APPROACH
    int count = (int)log10(n) + 1; //log10(n) gives the number of digits in the number n
    cout << "The total number of digits in the number: " << count << endl;
    return 0;
}

