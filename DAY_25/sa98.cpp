#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    for (char c : a) {
        if (b.find(c) != string::npos)
            cout << c << " ";
    }

    return 0;
}
