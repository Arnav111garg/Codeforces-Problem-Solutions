#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long w, h, d, n;
    if (!(cin >> w >> h >> d >> n)) return;

    vector<long long> div_n;
    for (long long i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            div_n.push_back(i);
            if (i * i != n) {
                div_n.push_back(n / i);
            }
        }
    }

    for (long long pw : div_n) {
        if (w % pw != 0) continue;

        long long n2 = n / pw;
        for (long long ph : div_n) {
            if (n2 % ph != 0) continue;
            if (h % ph != 0) continue;

            long long pd = n2 / ph;
            if (d % pd == 0) {
                cout << (pw - 1) << " " << (ph - 1) << " " << (pd - 1) << "\n";
                return;
            }
        }
    }

    cout << -1 << "\n";
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