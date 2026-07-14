
#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>
using namespace std;
 
int gcd_int(int a, int b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    // Check every pair (a[i], a[j])
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            // If we find any pair with GCD <= 2, we can make the array beautiful
            if (gcd_int(a[i], a[j]) <= 2) {
                cout << "Yes\n";
                return;
            }
        }
    }
    
    // If no such pair exists, it's impossible
    cout << "No\n";
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