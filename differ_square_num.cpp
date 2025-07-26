#include <iostream>
using namespace std;

int difference(int n) {
    int sum_n = (n * (n + 1)) / 2;  
    int sum_squares = (n * (n + 1) * (2 * n + 1)) / 6; 
    
    return (sum_n * sum_n) - sum_squares;  
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    cout << "Difference: " << difference(n) << endl;
    return 0;
}
