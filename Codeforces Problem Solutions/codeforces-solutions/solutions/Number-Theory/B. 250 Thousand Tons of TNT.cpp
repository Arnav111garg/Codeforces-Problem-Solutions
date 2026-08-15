#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<long long> a(n);
    vector<long long> pref(n + 1, 0);
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        pref[i + 1] = pref[i] + a[i];
    }
    
    long long max_diff = 0;
    
    for (int k = 1; k <= n; ++k) {
        if (n % k != 0) continue;
        
        long long min_truck = LLONG_MAX;
        long long max_truck = LLONG_MIN;
        
        for (int i = k; i <= n; i += k) {
            long long current_truck_weight = pref[i] - pref[i - k];
            min_truck = min(min_truck, current_truck_weight);
            max_truck = max(max_truck, current_truck_weight);
        }
        
        max_diff = max(max_diff, max_truck - min_truck);
    }
    
    cout << max_diff << "\n";
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