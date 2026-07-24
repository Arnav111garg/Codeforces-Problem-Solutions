#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;

    set<int> unique_nums;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        unique_nums.insert(x);
    }

    if (unique_nums.size() < 2) {
        cout << "NO\n";
    } else {
        auto it = unique_nums.begin();
        it++; 
        cout << *it << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    while (t--) {
        solve();
    }

    return 0;
}