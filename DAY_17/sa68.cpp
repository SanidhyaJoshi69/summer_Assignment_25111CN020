#include <iostream>
using namespace std;

int main() {
    int a[]={1,2,3,4};
    int b[]={3,4,5,6};
    int c[]={4,6,7,8};
    int n1=4,n2=4,n3=4;

    for(int i=0;i<n1;i++)

        for(int j=0;j<n2;j++)
            if(a[i]==b[j])
            
                for(int k=0;k<n3;k++)
                    if(a[i]==c[k]) 
                    cout<<a[i]<<" ";

}
