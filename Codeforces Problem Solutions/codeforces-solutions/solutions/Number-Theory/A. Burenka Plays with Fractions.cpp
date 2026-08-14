#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    long long X = a * d;
    long long Y = b * c;

    if (X == Y) {
        cout << 0 << "\n";
    } else if (X == 0 || Y == 0 || X % Y == 0 || Y % X == 0) {
        cout << 1 << "\n";
    } else {
        cout << 2 << "\n";
    }
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