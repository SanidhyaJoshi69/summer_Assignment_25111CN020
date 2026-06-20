#include <iostream>
#include <map>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    map<char,int> m;
    for(char x:s) 
    {
        m[x]++;
    }
    for(auto p:m) 
    cout << p.first << " " << p.second << endl;
}
