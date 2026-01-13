#include<bits/stdc++.h>

using namespace std;

bool check(int n) {
    int c = 0;
    while (n > 0) {
        int r = n % 10;
        if (r) {
            c++;
        }
        n /= 10;
    }
    return (c == 1);
}

int main() {
    set < int > candidates;
    for (int i = 1; i < 1e7; i++) {
        if (check(i)) {
            candidates.insert(i);
        }
    }
    int t = 1;
    cin >> t;
    while (t--) {
        int n, c = 0;
        cin >> n;

        for (auto it: candidates) {
            if (it <= n) {
                c++;
            } else {
                break;
            }
        }
        cout << c << endl;
    }
}