#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;

    set<int> unique_elements;
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        unique_elements.insert(val);
    }

    cout << unique_elements.size() << "\n";
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