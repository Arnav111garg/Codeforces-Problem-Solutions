#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int score = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x == 0) {
            score += 1;
        } else {
            score += x;
        }
    }

    cout << score << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}