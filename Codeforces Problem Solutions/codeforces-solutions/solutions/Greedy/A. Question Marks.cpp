#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int count_a = 0, count_b = 0, count_c = 0, count_d = 0;

    for (char c : s) {
        if (c == 'A') count_a++;
        else if (c == 'B') count_b++;
        else if (c == 'C') count_c++;
        else if (c == 'D') count_d++;
    }

    int score = min(count_a, n) + min(count_b, n) + min(count_c, n) + min(count_d, n);

    cout << score << "\n";
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