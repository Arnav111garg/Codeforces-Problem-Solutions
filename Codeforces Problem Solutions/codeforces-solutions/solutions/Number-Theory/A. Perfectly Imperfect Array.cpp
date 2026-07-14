#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    bool has_non_perfect_square = false;
    
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        
        // Check if x is a perfect square
        int root = round(sqrt(x));
        if (root * root != x) {
            has_non_perfect_square = true;
        }
    }
    
    if (has_non_perfect_square) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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