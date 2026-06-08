#include <iostream>
using namespace std;

bool isPerfect(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) sum += i;
    }
    return sum == n;
}

int main() {
    int num;
    cin >> num;
    if (isPerfect(num)) cout << "Perfect Number";
    else cout << "Not Perfect Number";
}
