#include <iostream>
using namespace std;

int main() {

    int a[]={1,2,2,3,4,4,5};

    int n=7;

    for(int i=0;i<n;i++) {

        bool d=false;

        for(int j=0;j<i;j++)

            if(a[i]==a[j]) d=true;

        if(!d) cout<<a[i]<<" ";

    }

}
