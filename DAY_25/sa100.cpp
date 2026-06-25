#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool cmp(string a, string b) {
    return a.size() < b.size();
}

int main() {
    int n;
    cin >> n;
    string arr[n];
    for (int i=0; i<n; i++) 
    {
        cin >> arr[i];
    }   

    sort(arr, arr+n, cmp);

    for (int i=0; i<n; i++) 
    {
        cout << arr[i] << " ";
    }
    return 0;
}
