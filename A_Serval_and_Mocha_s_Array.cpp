#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        bool res = false;
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (__gcd(v[i], v[j]) <= 2) {
                    res = true;
                    break;
                }
            }
        }

        if (res) {
            cout << "Yes\n";
        }
        else {
            cout << "No\n";
        }
    }
}