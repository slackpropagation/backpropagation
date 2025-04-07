#include <iostream>
using namespace std;

// Transfer function WITHOUT reference
void transfer(int from, int to, int amount) {
    if (from >= amount) {
        from -= amount;
        to += amount;
        cout << "Transferred $" << amount << " successfully!" << endl;
    } else {
        cout << "Not enough money to transfer!" << endl;
    }
}

int main() {
    int wallet = 50;
    int bank = 1000;

    cout << "Before transfer:" << endl;
    cout << "Wallet: $" << wallet << endl;
    cout << "Bank:   $" << bank << endl;

    transfer(wallet, bank, 20);  // Tries to move $20

    cout << "After transfer:" << endl;
    cout << "Wallet: $" << wallet << endl;
    cout << "Bank:   $" << bank << endl;

    return 0;
}