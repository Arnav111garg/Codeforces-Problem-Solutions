#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int total_sum = 0;
    for (char c : s) {
        if (c == '+') {
            total_sum++;
        } else {
            total_sum--;
        }
    }

    cout << abs(total_sum) << "\n";
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