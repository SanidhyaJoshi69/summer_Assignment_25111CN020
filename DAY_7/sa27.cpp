#include <iostream>
using namespace std;

int sumD(int n)
{
    if(n == 0)
    return 0;
    return (n % 10) + sumD(n / 10);
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of digits = " << sumD(n);
    return 0;
}