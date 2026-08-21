#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> d(n);
    map<int, int> freq;
    
    for (int i = 0; i < n; ++i) {
        cin >> d[i];
        freq[d[i]]++;
    }

    int x = *max_element(d.begin(), d.end());

    for (int i = 1; i <= x; ++i) {
        if (x % i == 0) {
            freq[i]--;
        }
    }

    int y = 0;
    for (auto const& p : freq) {
        if (p.second > 0) {
            y = max(y, p.first);
        }
    }

    cout << x << " " << y << "\n";
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