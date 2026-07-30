#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    if (cin >> n >> m) {
        int days = 0;
        while (n > 0) {
            days++;
            n--;
            if (days % m == 0) {
                n++;
            }
        }
        cout << days << "\n";
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