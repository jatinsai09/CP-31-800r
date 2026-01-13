#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int x = c - a;

        int y = d - b;

        if (y < 0 || x > y) {
            cout << "-1\n";
        }
        else {
            cout << y + (y - x) << endl;
        }
    }
}