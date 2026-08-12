#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a1, a2, a3;
    cin >> a1 >> a2 >> a3;

    long long sum = abs(a1 + a3 - 2 * a2);

    if (sum % 3 == 0) {
        cout << 0 << "\n";
    } else {
        cout << 1 << "\n";
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