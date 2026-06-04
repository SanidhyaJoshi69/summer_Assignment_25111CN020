#include <iostream>
using namespace std;
int main(){
    int i , j, n;
    cout<<"Enter the num of rows";
    cin>>n;

    for(i=0;i<=n;i++){
        for (j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<" "<<endl;
    }
return 0;
}