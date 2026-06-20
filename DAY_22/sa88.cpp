#include <iostream>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    for(char x:s)
        if(x!=' ') 
        cout << x;
}
