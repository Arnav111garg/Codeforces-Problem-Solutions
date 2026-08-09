#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;

    if (n <= 6) {
        cout << 15 << "\n";
    } else {
        if (n % 2 != 0) {
            n++; 
        }
        cout << (n * 5) / 2 << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}