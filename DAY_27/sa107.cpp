#include <iostream>
using namespace std;

struct Sal {
    int id;
    string name;
    int basic;
    int bonus;
};

int main() {
    Sal s;

    cin >> s.id >> s.name >> s.basic >> s.bonus;

    int total = s.basic + s.bonus;

    cout << "ID:" << s.id << " Name:" << s.name << " Total Salary:" << total;

    return 0;
}
