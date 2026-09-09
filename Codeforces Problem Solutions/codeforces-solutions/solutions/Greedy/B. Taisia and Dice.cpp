#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, s, r;
    cin >> n >> s >> r;

    int max_val = s - r;
    cout << max_val << " ";

    int remaining_dice = n - 1;
    int base = r / remaining_dice;
    int rem = r % remaining_dice;

    for (int i = 0; i < remaining_dice; ++i) {
        int val = base + (i < rem ? 1 : 0);
        cout << val << (i == remaining_dice - 1 ? "" : " ");
    }
    cout << "\n";
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