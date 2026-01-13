#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int res = 1e9;
    vector < int > v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        res = min(res, abs(v[i] - 0));
    }
    cout << res << endl;
}