#include <iostream>
using namespace std;

void fibonacci(int n) {
    int a = 0, b = 1, c;
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
}

int main() {
    int num;
    cin >> num;
    fibonacci(num);
}
