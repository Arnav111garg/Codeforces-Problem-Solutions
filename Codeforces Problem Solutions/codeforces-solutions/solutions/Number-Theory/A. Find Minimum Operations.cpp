
#include <iostream>
using namespace std;
 
void solve() {
    long long n, k;
    cin >> n >> k;
    
    // Edge case: If k = 1, we can only subtract 1 at a time.
    if (k == 1) {
        cout << n << "\n";
        return;
    }
    
    long long operations = 0;
    while (n > 0) {
        operations += n % k; // Add the remainder (digit in base k)
        n /= k;              // Move to the next place value
    }
    
    cout << operations << "\n";
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