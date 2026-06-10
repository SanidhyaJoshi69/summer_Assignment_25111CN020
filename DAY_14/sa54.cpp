#include <iostream>
using namespace std;

int main() {
    int a[]={1,2,3,2,4,2}, n=6, x=2, c=0;

    for(int i=0;i<n;i++) 
        if(a[i]==x) c++;

    cout<<"Freq="<<c;
}
