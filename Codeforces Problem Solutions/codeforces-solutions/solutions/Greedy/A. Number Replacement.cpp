#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    string s;
    cin >> s;

    unordered_map<int, char> num_to_char;
    bool possible = true;

    for (int i = 0; i < n; ++i) {
        if (num_to_char.count(a[i])) {
            if (num_to_char[a[i]] != s[i]) {
                possible = false;
                break;
            }
        } else {
            num_to_char[a[i]] = s[i];
        }
    }

    if (possible) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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