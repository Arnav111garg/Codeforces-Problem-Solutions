#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, h, l;
    cin >> n >> h >> l;
    
    int count_h = 0;
    int count_l = 0;
    int count_max = 0;
    
    int max_hl = max(h, l);
    
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a <= h) count_h++;
        if (a <= l) count_l++;
        if (a <= max_hl) count_max++;
    }
    
    int max_pairs = min({n / 2, count_h, count_l, count_max / 2});
    cout << max_pairs << "\n";
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