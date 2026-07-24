#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    unordered_set<int> elements_a;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        elements_a.insert(x);
    }

    int common_element = -1;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        if (elements_a.count(x) && common_element == -1) {
            common_element = x;
        }
    }

    if (common_element != -1) {
        cout << "YES\n";
        cout << 1 << " " << common_element << "\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}