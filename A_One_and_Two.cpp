#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector < int > v(n);
        int c = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            c += v[i] / 2;
        }

        int l = 0, r = c;
        bool flag = false;
        for (int i = 0; i < n; i++) {
            if (v[i] == 2) {
                l++;
                r--;
            }
            if (l == r) {
                cout << i + 1 << endl;
                flag = true;
                break;
            }
        }
        if (flag == false) {
            cout << -1 << endl;
        }

    }
}