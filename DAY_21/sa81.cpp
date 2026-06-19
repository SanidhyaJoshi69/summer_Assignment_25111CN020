#include <iostream>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    int l=0;
    for(char c:s) l++;
    cout << l;
}
