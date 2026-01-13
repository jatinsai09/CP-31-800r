#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > v(n);
        int prev = -1, res = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] == 1) {
                res = max(res, i - prev - 1);
                prev = i;
            }
        }
        res = max(res, n - prev - 1);
        cout << res << endl;
    }
}