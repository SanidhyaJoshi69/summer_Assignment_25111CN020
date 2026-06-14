#include <iostream>
using namespace std;

int main() {
    int a[]={1,2,3};
    int b[]={2,3,4};
    int n1=3,n2=3;

    for(int i=0;i<n1;i++)
        for(int j=0;j<n2;j++)
            if(a[i]==b[j]) 
            cout<<a[i]<<" ";

}
