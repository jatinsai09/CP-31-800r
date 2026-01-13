#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;

        vector<int> v(n);
        int last = 0, res = INT_MIN;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            res = max(res, v[i] - last);
            last = v[i];
        }

        res = max(res, 2 * (x - last));
        cout << res << "\n";
    }
}