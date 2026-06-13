#include <iostream>
using namespace std;

int main() {

    int a[]={1,2,4,5};

    int n=5;

    int s=n*(n+1)/2;

    int sm=0;

    for(int i=0;i<n-1;i++)

        sm+=a[i];

    cout<<s-sm;

}
