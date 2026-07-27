#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    if (cin >> n) {
        vector<string> s(n);
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }

        int len = s[0].length();
        int ans = 0;


        for (int i = 0; i < len; i++) {
            char current_char = s[0][i];
            bool all_match = true;

            for (int j = 1; j < n; j++) {
                if (s[j][i] != current_char) {
                    all_match = false;
                    break;
                }
            }

            if (all_match) {
                ans++;
            } else {
                break;
            }
        }

        cout << ans << "\n";
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