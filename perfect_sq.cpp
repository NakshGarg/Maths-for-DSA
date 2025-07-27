// Given a positive integer num, return true if num is a perfect square or false otherwise.
// A perfect square is an integer that is the square of an integer.
// You must not use any built-in library function, such as sqrt.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int i = 0;  
    while (i * i < n) {  // Loop until i squared is less than n
        i++;
    }
    if (i * i == n) {  // Check if i squared equals n
        cout << "Perfect Square" << endl;
    } else {
        cout << "Not a Perfect Square" << endl;
    }
}