#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    if (cin >> n) {
        int pos = 1; // Start at child 1

        for (int i = 1; i < n; i++) {
            // Move 'i' steps clockwise
            pos = (pos - 1 + i) % n + 1;
            cout << pos << (i == n - 1 ? "" : " ");
        }
        cout << "\n";
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