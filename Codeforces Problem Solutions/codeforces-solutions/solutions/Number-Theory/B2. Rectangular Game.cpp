#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    if (!(cin >> n)) return;

    long long ans = n;

    while (n > 1) {
        long long smallest_prime = n;
        
        for (long long p = 2; p * p <= n; ++p) {
            if (n % p == 0) {
                smallest_prime = p;
                break;
            }
        }
        
        n /= smallest_prime;
        ans += n;
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}