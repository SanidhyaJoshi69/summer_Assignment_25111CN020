#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int freq[256] = {0};
    for (char c : s) freq[c]++;

    int mx = 0;
    char ans;
    for (int i = 0; i < 256; i++) {
        if (freq[i] > mx) {
            mx = freq[i];
            ans = (char)i;
        }
    }

    cout << ans;
    return 0;
}
