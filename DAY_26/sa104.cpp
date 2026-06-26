#include <iostream>
using namespace std;

int main() {
    int sc = 0, ans;

    cout << "Q1: 2+2?\n1)3 2)4\n";
    cin >> ans;
    if (ans == 2) sc++;

    cout << "Q2: Capital of India?\n1)Delhi 2)Mumbai\n";
    cin >> ans;
    if (ans == 1) sc++;

    cout << "Score: " << sc;
    return 0;
}
