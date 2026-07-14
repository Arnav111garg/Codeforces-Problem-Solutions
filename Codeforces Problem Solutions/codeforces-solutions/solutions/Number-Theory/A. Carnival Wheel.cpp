#include <iostream>
#include <numeric>
#include <algorithm>
using namespace std;
 
void solve() {
    long long l, a, b;
    cin >> l >> a >> b;
    
    // Find the greatest common divisor of step size b and wheel size l
    long long g = __gcd(b, l);
    
    // All reachable positions will leave the same remainder as a modulo g
    long long r = a % g;
    
    // Calculate the maximum value of the form (r + m * g) that is < l
    long long max_prize = r + ((l - 1 - r) / g) * g;
    
    cout << max_prize << "\n";
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