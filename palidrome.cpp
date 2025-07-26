//check palindrome
#include<iostream>
using namespace std;
int main(){
    int n, reversedNumber = 0;
    cout << "Enter a number: ";
    cin >> n;

    int og_n = n;
    
    while (n != 0) {
        int digit = n % 10; // Get the last digit
        reversedNumber = reversedNumber * 10 + digit; // Append it to the reversed number
        n /= 10; // Remove the last digit from n
    }
    
    if (reversedNumber == og_n){
        cout<<"The number is a palindrome!";
    }
    else{
        cout<<"The number is not a palindrome!";
    }
    return 0;
}