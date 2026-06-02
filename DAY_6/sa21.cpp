#include <iostream>
using namespace std;
int btd(int n){
    int dig, pow=2,b;
    while(n>0){
        dig=n%10;
        n/=10;
        b=(dig*pow);
        pow*=2;
    }
    return b;

}
int main(){
    int n,r;
    cout<<"Enter a number: ";
    cin>>n;
    r=btd(n);
    cout<<"Binary to decimal: "<<r<<endl;
    return 0;
}   