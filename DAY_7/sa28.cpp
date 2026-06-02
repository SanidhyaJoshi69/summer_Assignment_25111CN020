#include <iostream>
using namespace std;

int revN(int n, int rev = 0)
{
    if(n == 0)
        return rev;

    return revN(n/10,rev*10+n%10);
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;
    cout << "Reverse number = "<<revN(n);

    return 0;
}