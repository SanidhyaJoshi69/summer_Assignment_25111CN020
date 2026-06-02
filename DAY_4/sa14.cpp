#include <iostream>
using namespace std;

int fabo(int q){
    int sum=0,f=0,s=1,n,i,t;
    for(i=0;i<q;i++){
    
    t=f;
    sum+=f;
    n=f+s;
    f=s;
    s=n;;
  }
  return t;
}
int main(){
    int x,s=0;
    cout<<"enter nth term"<<endl;
    cin>>x;
    s=fabo(x);
    cout<<"the nth term of series is: "<<s;
return 0 ;
}