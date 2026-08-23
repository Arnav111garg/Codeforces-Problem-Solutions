#include <bits/stdc++.h>
using namespace std;

void solve() {
    int min_x = 2000, max_x = -2000;

    for (int i = 0; i < 4; ++i) {
        int x, y;
        cin >> x >> y;
        min_x = min(min_x, x);
        max_x = max(max_x, x);
    }

    int side = max_x - min_x;
    cout << side * side << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }

    return 0;
}