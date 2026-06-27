#include <iostream>
using namespace std;

struct Stu {
    int id;
    string name;
    int m1, m2, m3;
};

int main() {
    Stu s;

    cin >> s.id >> s.name >> s.m1 >> s.m2 >> s.m3;

    int total = s.m1 + s.m2 + s.m3;
    float per = total / 3.0;

    cout << "ID:" << s.id << " Name:" << s.name << "\n";
    cout << "Total:" << total << " Percentage:" << per;

    return 0;
}