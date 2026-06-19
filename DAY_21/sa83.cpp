#include <iostream>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    int v=0,c=0;
    for(char x:s) {
        if(isalpha(x)) {
            char y=tolower(x);
            if(y=='a'||y=='e'||y=='i'||y=='o'||y=='u') v++;
            else c++;
        }
    }
    cout << v << " " << c;
}
