#include <iostream>
using namespace std;

int main() {
    int a[]={4,9,1,7,3}, n=5;
    int m1=a[0], m2=-1;

    for(int i=1;i<n;i++){
        if(a[i]>m1){ 
            m2=m1; 
            m1=a[i]; 
        }
        else if(a[i]>m2 && a[i]<m1) 
            m2=a[i];
    }

    cout<<"Second largest="<<m2;
}
