#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    if (!(cin >> n >> x)) return;

    vector<int> a(n);
    int first_one = -1, last_one = -1;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] == 1) {
            if (first_one == -1) first_one = i;
            last_one = i;
        }
    }

    int required_time = last_one - first_one + 1;

    if (required_time <= x) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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