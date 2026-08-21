#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;

    map<int, int> prime_counts;

    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;

        for (int p = 2; p * p <= val; ++p) {
            while (val % p == 0) {
                prime_counts[p]++;
                val /= p;
            }
        }
        if (val > 1) {
            prime_counts[val]++;
        }
    }

    for (auto const& entry : prime_counts) {
        if (entry.second % n != 0) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }

    return 0;
}