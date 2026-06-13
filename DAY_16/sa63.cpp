#include <iostream>
using namespace std;

int main() {

    int a[]={1,2,3,4,5};

    int n=5;

    int s=6;

    for(int i=0;i<n;i++)

        for(int j=i+1;j<n;j++)

            if(a[i]+a[j]==s)

                cout<<a[i]<<" "<<a[j]<<endl;

}
