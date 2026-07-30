#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;


    for (int k = 2; k <= 30; k++) {
        long long val = (1LL << k) - 1;
        if (n % val == 0) {
            cout << n / val << "\n";
            return;
        }
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