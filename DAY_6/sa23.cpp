#include <iostream>
using namespace std;

int sb(int n){
    int d , p=1,c=0;
    while(n>0){
    d=n%2;
    n/=2;
    if(d==1)
    c++;
    }
return c;
}
int main(){
    int n,r;
    cout<<"enter a number: "<<endl;
    cin>>n;
    r=sb(n);
    cout<<"THE NUM OF SET BITS IS: "<<r<<endl;

    return 0;
}