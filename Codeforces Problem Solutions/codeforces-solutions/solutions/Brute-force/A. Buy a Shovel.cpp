#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int k, r;
    cin >> k >> r;
 
    for (int i = 1; i <= 10; ++i) {
        int total_cost = i * k;
        
        if (total_cost % 10 == 0 || total_cost % 10 == r) {
            cout << i << "\n";
            return;
        }
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