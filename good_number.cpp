// You are given a number n, You have to tell 
// if the number is good, a good number is the number whose count of factors is prime.

#include <iostream>
using namespace std;

int countDivisors(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) count++;
    }
    return count;
}

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int factors = countDivisors(n);
    
    if (isPrime(factors))
        cout << "Good" << endl;
    else
        cout << "Not Good" << endl;

    return 0;
}
