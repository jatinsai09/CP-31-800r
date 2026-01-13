#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > v(n);
        map < int, int > mp;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            ++mp[v[i]];
        }

        if (mp.size() == 1) {
            cout << "-1" << endl;
        }
        else {
            int ele = begin(mp) -> first;
            int freq = begin(mp) -> second;

            cout << freq << " " << n - freq << endl;

            for (int i = 0; i < freq; i++) {
                cout << ele << " ";
            }
            cout << endl;
            mp.erase(ele);

            for (auto& it: mp) {
                int e = it.first, f = it.second;
                for (int i = 0; i < f; i++) {
                    cout << e << " ";
                }
            }
            cout << endl;
        }
    }
}