#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    string ans = "";
    for (char c : s) {
        if (ans.find(c) == string::npos) 
        ans += c;
    }

    cout << ans;
    return 0;
}
