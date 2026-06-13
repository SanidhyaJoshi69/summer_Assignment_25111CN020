#include <iostream>
using namespace std;

int main() {

    int a[]={1,2,2,3,3,3,4};

    int n=7;

    int mf=0,el=a[0];

    for(int i=0;i<n;i++) {

        int c=0;

        for(int j=0;j<n;j++)

            if(a[i]==a[j]) c++;

        if(c>mf) {mf=c; el=a[i];}

    }

    cout<<el;

}
