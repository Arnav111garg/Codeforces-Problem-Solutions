#include <iostream>
#include <vector>
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
    
    long long product = 1;
    bool overflow_or_invalid = false;
    
    for (int i = 0; i < n; ++i) {
        long long b;
        cin >> b;
        product *= b;
        // Optimization: If the product already exceeds 2023, 
        // it can never divide 2023 evenly.
        if (product > 2023) {
            overflow_or_invalid = true;
        }
    }
    
    // Check if 2023 is perfectly divisible by the product of sequence b
    if (!overflow_or_invalid && 2023 % product == 0) {
        cout << "YES\n";
        // Print the primary missing factor
        cout << 2023 / product;
        // Pad the rest of the k elements with 1s
        for (int i = 1; i < k; ++i) {
            cout << " " << 1;
        }
        cout << "\n";
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