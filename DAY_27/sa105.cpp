#include <iostream>
using namespace std;

struct Stu {
    int id;
    string name;
};

int main() {
    Stu s;
    cin >> s.id >> s.name;

    cout << "ID:" << s.id << " Name:" << s.name;
    return 0;
}
