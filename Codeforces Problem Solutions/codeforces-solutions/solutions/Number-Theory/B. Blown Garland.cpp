#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    if (!(cin >> s)) return;

    int n = s.length();
    vector<char> color_pattern(4, ' ');

    for (int i = 0; i < n; ++i) {
        if (s[i] != '!') {
            color_pattern[i % 4] = s[i];
        }
    }

    int red = 0, blue = 0, yellow = 0, green = 0;

    for (int i = 0; i < n; ++i) {
        if (s[i] == '!') {
            char c = color_pattern[i % 4];
            if (c == 'R') red++;
            else if (c == 'B') blue++;
            else if (c == 'Y') yellow++;
            else if (c == 'G') green++;
        }
    }

    cout << red << " " << blue << " " << yellow << " " << green << "\n";
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