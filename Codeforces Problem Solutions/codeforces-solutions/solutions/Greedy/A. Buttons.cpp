#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b, c;
    if (!(cin >> a >> b >> c)) return;

    if (a + (c % 2) > b) {
        cout << "First\n";
    } else {
        cout << "Second\n";
    }
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