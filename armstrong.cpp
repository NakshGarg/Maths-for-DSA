//ARMSTRONG NUMBER
#include <iostream>
using namespace std;
int main(){
    int n, sum=0;
    cout << "Enter a number: ";
    cin >> n;

    int og_n = n;

    while (n != 0) {
        int digit = n % 10; // Get the last digit
        sum = sum + (digit*digit*digit); // Append it to the reversed number
        n /= 10; // Remove the last digit from n
    }
    if (sum == og_n){
        cout<<"The number is an Armstrong number!";
    }
    else{
        cout<<"The number is not an Armstrong number!";
    }
    return 0;
}