#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    long long s, m;
    if (!(cin >> n >> s >> m)) return;

    vector<pair<long long, long long>> tasks(n);
    for (int i = 0; i < n; ++i) {
        cin >> tasks[i].first >> tasks[i].second;
    }

    bool can_shower = false;

    if (tasks[0].first >= s) {
        can_shower = true;
    }

    for (int i = 0; i < n - 1; ++i) {
        if (tasks[i + 1].first - tasks[i].second >= s) {
            can_shower = true;
        }
    }

    if (m - tasks[n - 1].second >= s) {
        can_shower = true;
    }

    if (can_shower) {
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