#include <bits/stdc++.h>
using namespace std;

long long get_product(string s) {
    long long prod = 1;
    bool leading_zero = true;
    for (char c : s) {
        if (leading_zero && c == '0') continue;
        leading_zero = false;
        prod *= (c - '0');
    }
    return prod;
}

void solve() {
    string s;
    if (!(cin >> s)) return;

    long long max_prod = get_product(s);
    int len = s.length();

    for (int i = 0; i < len; ++i) {
        if (s[i] == '0') continue;

        string candidate = s;
        candidate[i]--;
        for (int j = i + 1; j < len; ++j) {
            candidate[j] = '9';
        }

        max_prod = max(max_prod, get_product(candidate));
    }

    cout << max_prod << "\n";
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