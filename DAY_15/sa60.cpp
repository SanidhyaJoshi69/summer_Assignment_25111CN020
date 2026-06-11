#include <iostream>
using namespace std;

int main() {

    int a[]={0,1,0,3,12};

    int n=5;

    int b[n],k=0;

    for(int i=0;i<n;i++) 

        if(a[i]!=0) b[k++]=a[i];

    while(k<n) b[k++]=0;

    for(int i=0;i<n;i++) 

        cout<<b[i]<<" ";

}
