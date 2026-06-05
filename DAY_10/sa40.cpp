#include <iostream>
using namespace std;
int main() {
    int n=5;
    for(int i=1;i<=n;i++){
        for(char j='A';j<'A'+i;j++) 
        cout<<j;
        for(char j='A'+i-2;j>='A';j--) 
        cout<<j;
        cout<<endl;
    }
}
