#include <bits/stdc++.h>
using namespace std;

const int MAX_VAL = 1000000;
const int MOD = 1073741824; // 2^30

int d[MAX_VAL + 1];

void precompute_divisors() {
    for (int i = 1; i <= MAX_VAL; ++i) {
        for (int j = i; j <= MAX_VAL; j += i) {
            d[j]++;
        }
    }
}

void solve() {
    int a, b, c;
    if (!(cin >> a >> b >> c)) return;

    precompute_divisors();

    long long total_sum = 0;

    for (int i = 1; i <= a; ++i) {
        for (int j = 1; j <= b; ++j) {
            for (int k = 1; k <= c; ++k) {
                int prod = i * j * k;
                total_sum = (total_sum + d[prod]) % MOD;
            }
        }
    }

    cout << total_sum << "\n";
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