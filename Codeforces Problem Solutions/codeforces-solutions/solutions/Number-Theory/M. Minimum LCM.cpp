#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    long long smallest_prime_factor = n;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            smallest_prime_factor = i;
            break;
        }
    }
    if (smallest_prime_factor == n) {
        cout << 1 << " " << n - 1 << "\n";
    } else {
        long long a = n / smallest_prime_factor;
        long long b = n - a;
        cout << a << " " << b << "\n";
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