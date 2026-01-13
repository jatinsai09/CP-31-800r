#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        vector < int > b(n), res;
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            res.push_back(b[i]);
            if (i > 0 && b[i - 1] > b[i]) {
                res.push_back(b[i]);
            }
        }

        cout << res.size() << endl;
        for (auto& x: res) {
            cout << x << " ";
        }
        cout << endl;
    }
}