#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int num = rand() % 100 + 1, g;

    do {
        cin >> g;
        if (g < num)
         cout << "Too Low\n";
        else if (g > num)
         cout << "Too High\n";
    } while (g != num);

    cout << "Correct!";
    return 0;
}
