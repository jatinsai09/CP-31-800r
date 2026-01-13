#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > v(n);
        int c1 = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] == 1) {
                c1++;
            }
        }
        
        int c = n - c1;
        if (c1 >= c) {
            cout << c % 2 << endl;
        }
        else {
            int res = (c - c1) / 2;
            res += (c - c1) % 2;
            
            c -= res;
            res += c % 2;
            
            cout << res << endl;
        }
    }
}