#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector < int > v(n);
        int flag = 1, min_d = INT_MAX;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (i > 0) {
                if (v[i] >= v[i - 1]) {
                    min_d = min(min_d, v[i] - v[i - 1]);
                }
                else {
                    flag = 0;
                }
            }
        }

        if (flag) {
            cout << (min_d >> 1) + 1 << endl;
        }
        else {
            cout << 0 << endl;
        }
    }
}