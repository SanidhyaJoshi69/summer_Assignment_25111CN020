#include <iostream>
using namespace std;

int as(int n){
    int i ,dig,p=1,s,t;
    for(i=1;i<=n;i++)
    { t=i;
      s=0;
      while(t>0)
      {
        dig=t%10;
        t/=10;
        p=dig*dig*dig;
        s+=p;
      }
  if (i==s)
   cout<<s<<" ";
 }
}

int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    as(n);
return 0 ;
}
