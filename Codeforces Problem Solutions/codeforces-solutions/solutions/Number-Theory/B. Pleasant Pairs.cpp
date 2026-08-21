#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> a(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    long long count = 0;

    for (int i = 1; i <= n; ++i) {
        long long start_j = a[i] - (i % a[i]);
        if (start_j <= i) {
            start_j += a[i] * ((i - start_j) / a[i] + 1);
        }

        for (long long j = start_j; j <= n; j += a[i]) {
            if (a[i] * a[j] == i + j) {
                count++;
            }
        }
    }

    cout << count << "\n";
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