#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    if (n >= 0) {
        cout << n << "\n";
    } else {
        int option1 = n / 10;
        int option2 = (n / 100) * 10 + (n % 10);
        cout << max({n, option1, option2}) << "\n";
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