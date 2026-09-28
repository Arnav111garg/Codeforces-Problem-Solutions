#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    map<int, int> freq;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }
    
    int max_length = 0;
    
    for (int c = 1; c <= n; c++) {
        int k = 0;
        for (const auto& entry : freq) {
            if (entry.second >= c) {
                k++;
            }
        }
        max_length = max(max_length, k * c);
    }
    
    cout << max_length << "\n";
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