#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    long long k;
    cin >> n >> k;

    vector<long long> s(n), t(n);
    map<long long, int> freq_s, freq_t;

    for (int i = 0; i < n; ++i) {
        cin >> s[i];
        long long rem = s[i] % k;
        long long canonical = min(rem, (k - rem) % k);
        freq_s[canonical]++;
    }

    for (int i = 0; i < n; ++i) {
        cin >> t[i];
        long long rem = t[i] % k;
        long long canonical = min(rem, (k - rem) % k);
        freq_t[canonical]++;
    }

    if (freq_s == freq_t) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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