#include <iostream>
using namespace std;

// Function to determine if you can win the game
bool canWinNim(int n) {
    return (n % 4 != 0); // If n is a multiple of 4, you will always lose if both play optimally
}

int main() {
    int n;
    cout << "Enter the number of stones: ";
    cin >> n;
    
    if (canWinNim(n)) {
        cout << "You can win the game!" << endl;
    } else {
        cout << "You will lose the game!" << endl;
    }
    
    return 0;
}
