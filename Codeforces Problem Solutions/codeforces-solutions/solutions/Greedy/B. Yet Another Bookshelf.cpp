#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    int first_1 = -1, last_1 = -1;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] == 1) {
            if (first_1 == -1) {
                first_1 = i;
            }
            last_1 = i;
        }
    }

    int moves = 0;
    for (int i = first_1; i <= last_1; ++i) {
        if (a[i] == 0) {
            moves++;
        }
    }

    cout << moves << "\n";
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