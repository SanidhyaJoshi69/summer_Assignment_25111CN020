#include <iostream>
using namespace std;
int main(){
 int i ,sm,n;
 cout<<"enter the size of array"<<endl;
 cin>>n;
 int a[n];
cout<<"enter the elements";

 for(i=0;i<n;i++)
 cin>>a[i];
 sm=a[0];

 for(i=0;i<n;i++){
if(sm>a[i])
sm=a[i];}
cout<<"the smallest element is: "<<sm;

    return 0;
}