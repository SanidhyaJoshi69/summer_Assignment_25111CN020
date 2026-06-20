#include <iostream>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    bool f = true;
    for(int i=0,j=s.size()-1;i<j;i++,j--){
        if(s[i]!=s[j]) 
        {
            f=false;
            break;
        }

    }
    cout << (f?"Yes":"No");
}
