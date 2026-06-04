#include <iostream>
using namespace std;
int main(){
    int i , j, n;
    char ch='A';
    cout<<"Enter the num of rows";
    cin>>n;

    for(i=1;i<=n;i++){
        for (j=1;j<=i;j++){
            cout<<ch;
        }
        ch++;
        cout<<" "<<endl;
    }
return 0;
}