#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long b;
    if (!(cin >> b)) return;

    long long divisor_count = 0;

    for (long long i = 1; i * i <= b; ++i) {
        if (b % i == 0) {
            divisor_count++;
            if (i * i != b) {
                divisor_count++;
            }
        }
    }

    cout << divisor_count << "\n";
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