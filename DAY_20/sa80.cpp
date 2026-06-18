#include <iostream>
using namespace std;
int main() {
    int r,c;
    cin >> r >> c;
    int a[r][c];
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin >> a[i][j];
    for(int j=0;j<c;j++) {
        int s=0;
        for(int i=0;i<r;i++)
            s+=a[i][j];
        cout << s << endl;
    }
}
