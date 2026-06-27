#include <iostream>
using namespace std;

struct Emp {
    int id;
    string name;
    int sal;
};

int main() {
    Emp e;

    cin >> e.id >> e.name >> e.sal;

    cout << "ID:" << e.id << " Name:" << e.name << " Salary:" << e.sal;

    return 0;
}
