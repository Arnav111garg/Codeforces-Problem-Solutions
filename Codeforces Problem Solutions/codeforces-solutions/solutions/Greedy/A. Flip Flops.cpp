#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    long long c, k;
    cin >> n >> c >> k;
    
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());
    
    for (int i = 0; i < n; i++) {
        if (a[i] <= c) {
            long long add = min(k, c - a[i]);
            c += (a[i] + add);
            k -= add;
        } else {
            break;
        }
    }
    
    cout << c << "\n";
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