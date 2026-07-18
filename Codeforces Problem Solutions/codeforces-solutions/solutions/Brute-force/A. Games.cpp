#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> home(n), guest(n);
    for (int i = 0; i < n; ++i) {
        cin >> home[i] >> guest[i];
    }

    int conflicts = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i != j && home[i] == guest[j]) {
                conflicts++;
            }
        }
    }

    cout << conflicts << "\n";
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