#include <iostream>
using namespace std;

int main() {
    int bal = 1000, ch, amt;

    cout << "1.Deposit 2.Withdraw 3.Balance\n";
    cin >> ch;

    if (ch == 1) {
        cin >> amt;
        bal += amt;
    } else if (ch == 2) {
        cin >> amt;
        if (amt <= bal) bal -= amt;
        else cout << "Insufficient\n";
    }

    cout << "Balance: " << bal;
    return 0;
}
