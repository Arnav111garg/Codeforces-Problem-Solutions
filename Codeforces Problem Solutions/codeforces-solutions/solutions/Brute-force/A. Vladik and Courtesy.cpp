#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b;
    if (cin >> a >> b) {
        long long turn = 1;
        while (true) {
            if (turn % 2 == 1) { // Vladik's turn
                if (a < turn) {
                    cout << "Vladik\n";
                    return;
                }
                a -= turn;
            } else { // Valera's turn
                if (b < turn) {
                    cout << "Valera\n";
                    return;
                }
                b -= turn;
            }
            turn++;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1; 
    while (t--) {
        solve();
    }

    return 0;
}