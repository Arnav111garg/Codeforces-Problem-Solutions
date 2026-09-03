#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> a(n);
    long long total_water = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        total_water += a[i];
    }

    long long target = total_water / n;
    long long surplus = 0;

    for (int i = 0; i < n; ++i) {
        surplus += (a[i] - target);
        if (surplus < 0) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
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