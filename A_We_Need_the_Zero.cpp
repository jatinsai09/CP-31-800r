#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > v(n);
        int xr = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            xr = xr ^ v[i];
        }
        if (n & 1) {
            cout << xr << endl;
        }
        else {
            if (xr == 0) {
                cout << 0 << endl;
            }
            else {
                cout << -1 << endl;
            }
        }
    }

}