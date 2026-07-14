#include <iostream>
using namespace std;
 
void solve() {
    long long l, r;
    cin >> l >> r;
    
    // Corner case: if the range is exactly [1, 1], 
    // it contains exactly 1 minimal coprime segment ([1, 1] itself).
    if (l == 1 && r == 1) {
        cout << 1 << "\n";
    } else {
        // For any other range, the answer is just the length of the interval
        cout << r - l << "\n";
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