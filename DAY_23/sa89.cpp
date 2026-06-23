#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        bool rep = false;

        for (int j = 0; j < s.size(); j++) {
            if (i != j && s[i] == s[j]) {
                rep = true;
                break;
            }
        }

        if (!rep) {
            cout << s[i];
            return 0;
        }
    }

    cout << "None";
    return 0;
}
