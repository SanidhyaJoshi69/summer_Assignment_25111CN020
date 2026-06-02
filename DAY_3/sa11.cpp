#include <iostream>
using namespace std;
int main(){
int a,b,gcd,i;
cout<<"enter two nums"<<endl;
cin>>a>>b;
for(i=1;i<=a&&i<=b;i++){
    if(a%i==0&&b%i==0)
    gcd=i;
}
cout<<"GCD = "<<gcd;
return 0;
}