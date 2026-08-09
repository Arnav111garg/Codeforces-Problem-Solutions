#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b;
    cin >> a >> b;

    long long xK, yK, xQ, yQ;
    cin >> xK >> yK;
    cin >> xQ >> yQ;

    vector<pair<long long, long long>> directions = {
        {a, b}, {a, -b}, {-a, b}, {-a, -b},
        {b, a}, {b, -a}, {-b, a}, {-b, -a}
    };

    set<pair<long long, long long>> king_attacks;
    for (auto d : directions) {
        king_attacks.insert({xK + d.first, yK + d.second});
    }

    set<pair<long long, long long>> queen_attacks;
    for (auto d : directions) {
        queen_attacks.insert({xQ + d.first, yQ + d.second});
    }

    int count = 0;
    for (auto pos : king_attacks) {
        if (queen_attacks.count(pos)) {
            count++;
        }
    }

    cout << count << "\n";
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