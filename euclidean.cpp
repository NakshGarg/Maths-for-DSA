//WAP TO FIND GCD BY EUCLIDEAN APPROACH
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    cout << "GCD/HCF is: " << a << endl;
    return 0;
}
