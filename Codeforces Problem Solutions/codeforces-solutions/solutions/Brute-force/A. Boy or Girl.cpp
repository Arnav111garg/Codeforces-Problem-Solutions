#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    set<char> distinct_chars;
    for (char c : s) {
        distinct_chars.insert(c);
    }

    if (distinct_chars.size() % 2 == 0) {
        cout << "CHAT WITH HER!\n";
    } else {
        cout << "IGNORE HIM!\n";
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