#include <iostream>
#include <algorithm>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    long long max_val = 0;
    long long min_val = 2e9; 
    
    for (int i = 0; i < n; ++i) {
        long long a;
        cin >> a;
        max_val = max(max_val, a);
        min_val = min(min_val, a);
    }
    
    cout << max_val - min_val << "\n";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}