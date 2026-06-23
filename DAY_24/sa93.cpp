#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    if (a.size() == b.size() && (a + a).find(b) != string::npos)
        cout << "Rotation";
    else
        cout << "Not Rotation";

    return 0;
}
