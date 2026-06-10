#include <iostream>
using namespace std;

int main() {
    int a[]={3,7,1,9,5}, n=5, x=9, f=-1;

    for(int i=0;i<n;i++) 
        if(a[i]==x) f=i;

    if(f!=-1) 
        cout<<"Found at "<<f;
    else 
        cout<<"Not found";
}
