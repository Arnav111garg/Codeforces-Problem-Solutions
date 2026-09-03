#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;

    if (n == 1) {
        cout << 2 << "\n";
    } else if (n % 3 == 0) {
        cout << n / 3 << "\n";
    } else {
        cout << (n / 3) + 1 << "\n";
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