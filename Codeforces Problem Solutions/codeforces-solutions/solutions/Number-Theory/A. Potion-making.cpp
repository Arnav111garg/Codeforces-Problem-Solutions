#include <iostream>
#include <numeric>
#include <algorithm>
using namespace std;
 
void solve() {
    int k;
    cin >> k;
    
    // Find the greatest common divisor of k and 100
    int common_divisor = __gcd(k, 100);
    
    // The minimum steps is 100 divided by the GCD
    cout << 100 / common_divisor << "\n";
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