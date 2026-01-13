#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for(auto &i : a){
            cin >> i;
        }
         
        if(k == 1 && !is_sorted(a.begin(),a.end())){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }
}