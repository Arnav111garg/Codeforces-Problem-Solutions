#include <iostream>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    // The sum of the three smallest nearly primes (6, 10, 14) is 30.
    // If n is 30 or less, we can't even form the smallest possible combination.
    if (n <= 30) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
        
        // Check for conflicts where (n - 30) equals one of our chosen numbers (6, 10, or 14)
        if (n == 36 || n == 40 || n == 44) {
            // Swap 14 for 15. The sum of (6, 10, 15) is 31.
            // The remaining fourth number is (n - 31), which avoids all duplicates.
            cout << "6 10 15 " << (n - 31) << "\n";
        } else {
            // Use the standard optimal set (6, 10, 14)
            // The remaining fourth number is (n - 30)
            cout << "6 10 14 " << (n - 30) << "\n";
        }
    }
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