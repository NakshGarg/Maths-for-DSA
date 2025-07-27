#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of bulbs: ";
    cin >> n;

    int count = 0;
    int i = 1;

    while (i * i <= n) {
        count++;
        i++;
    }

    cout << "Number of bulbs that are ON after " << n << " rounds: " << count << endl;

    return 0;
}
