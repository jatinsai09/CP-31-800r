#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    int board[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            int m = min(i, j);
            m = min(m, 10 - i - 1);
            m = min(m, 10 - j - 1);
            board[i][j] = m + 1;
        }
    }

    while (t--) {
        int sum = 0;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                char c;
                cin >> c;
                if (c != '.') {
                    sum += board[i][j];
                }
            }
        }
        cout << sum << endl;
    }
}