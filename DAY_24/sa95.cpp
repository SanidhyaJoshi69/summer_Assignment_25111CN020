#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string line, w, lw;
    getline(cin, line);

    stringstream ss(line);
    while (ss >> w) {
        if (w.size() > lw.size()) 
        lw = w;
    }

    cout << lw;
    return 0;
}
