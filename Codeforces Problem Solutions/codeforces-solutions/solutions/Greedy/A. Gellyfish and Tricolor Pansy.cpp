#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    long long gellyfish_hp = min(a, c);
    long long flower_hp = min(b, d);

    if (gellyfish_hp >= flower_hp) {
        cout << "Gellyfish\n";
    } else {
        cout << "Flower\n";
    }
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