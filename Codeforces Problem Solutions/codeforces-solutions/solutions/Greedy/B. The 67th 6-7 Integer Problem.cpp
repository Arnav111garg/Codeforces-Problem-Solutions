#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<long long> a(7);
    for (int i = 0; i < 7; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    long long ans = a[6];
    for (int i = 0; i < 6; ++i) {
        ans -= a[i];
    }

    cout << ans << "\n";
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