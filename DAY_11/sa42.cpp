#include <iostream>
using namespace std;

int maximum(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << "Maximum = " << maximum(x, y);
    return 0;
}
