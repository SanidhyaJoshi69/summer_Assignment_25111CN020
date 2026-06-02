#include <iostream>
using namespace std;

int main() {
    int n, t, r, f, s=0;

    cout <<"Enter a number: ";
    cin >>n;
    t=n;
    while(t > 0) {
        r= t % 10;
        f = 1;

        for(int i = 1; i <= r; i++) 
            f = f * i;

        s = s + f;
        t =t / 10;
    }
    if(s==n) 
    cout << n << " is a Strong Number";
    else 
    cout << n << " is not a Strong Number";
    return 0;
}