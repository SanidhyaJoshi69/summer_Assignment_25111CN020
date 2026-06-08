#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n) {
    int sum = 0, temp = n, digits = 0;
    while (temp > 0) { digits++; temp /= 10; }
    temp = n;
    while (temp > 0) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }
    return sum == n;
}

int main() {
    int num;
    cin >> num;
    if (isArmstrong(num)) cout << "Armstrong";
    else cout << "Not Armstrong";
}
