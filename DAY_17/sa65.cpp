#include <iostream>
using namespace std;

int main() {
    int a[]={1,2,3};
    int b[]={4,5,6};
    int n1=3,n2=3;
    int c[n1+n2],k=0;
    
    for(int i=0;i<n1;i++)

        c[k++]=a[i];

    for(int i=0;i<n2;i++)

        c[k++]=b[i];

    for(int i=0;i<n1+n2;i++)

        cout<<c[i]<<" ";

}
