#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<int> x(3);
    cin >> x[0] >> x[1] >> x[2];

    sort(x.begin(), x.end());

    int min_total_distance = x[2] - x[0];

    cout << min_total_distance << "\n";
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