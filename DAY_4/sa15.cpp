#include <iostream>
using namespace std;

int as(int n){
    int i ,dig,p=1,s=0;
    while(n>0){
        dig=n%10;
        n/=10;
        p=dig*dig*dig;
        s+=p;
    }

    return s;
}

int main(){
    int n,r;
    cout<<"enter a number"<<endl;
    cin>>n;
    r=as(n);

    if(r==n)
    cout<<"IT IS ARMSTRONG NUMBRER";
    else
    cout<<"IT IS NOT ARMSTRONG NUMBER";

    return 0 ;
}
