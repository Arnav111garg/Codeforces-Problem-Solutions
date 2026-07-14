#include <iostream>
using namespace std;
 
void solve() {
    long long k;
    cin >> k;
    // Your optimal O(1) logic: x = k - 1 is always the largest solution
    cout << k - 1 << "\n";
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