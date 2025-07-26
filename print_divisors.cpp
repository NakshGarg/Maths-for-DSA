//write a program to print all the divisors
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :- ";
    cin>>n;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << "Divisors of " << n << ": " << i << " ";
        }
    }
    return 0;
}