#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int ways = 0;
    for (int l = 1; l < n; l++) {
        if (n % l == 0) {
            ways++;
        }
    }

    cout << ways << "\n";
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