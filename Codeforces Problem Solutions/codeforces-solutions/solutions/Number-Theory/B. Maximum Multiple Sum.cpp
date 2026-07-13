#include <iostream>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    // According to our mathematical shortcut:
    // If n is 3, the best choice is 3. 
    // For all other numbers, 2 yields the maximum sum.
    if (n == 3) {
        cout << 3 << "\n";
    } else {
        cout << 2 << "\n";
    }
}
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}