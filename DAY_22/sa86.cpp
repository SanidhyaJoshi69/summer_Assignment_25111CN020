#include <iostream>
#include <sstream>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    string w;
    int c=0;
    
    stringstream ss(s);
    while(ss>>w) 
    {
        c++;
    }
    cout << c;
}

