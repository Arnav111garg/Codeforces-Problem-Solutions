#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    if (cin >> n) {
        string s;
        cin >> s;

        int count_8 = 0;
        for (char c : s) {
            if (c == '8') {
                count_8++;
            }
        }

        int max_by_length = n / 11;
        cout << min(count_8, max_by_length) << "\n";
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