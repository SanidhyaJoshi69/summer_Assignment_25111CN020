#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int i,n,dig,rev=0;
  cout<<"Enter any number\n";
  cin>>n;
  while (n>0){
   dig=n%10;
   rev=rev*10+dig;
   n=n/10;
   }
  cout<<"the reverse of the number is\t"<<rev;
 return 0;
}