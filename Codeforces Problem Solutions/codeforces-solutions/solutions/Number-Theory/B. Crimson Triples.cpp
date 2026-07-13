#include <iostream>
#include <vector>
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
    
    long long total_triples = 0;
    
    for (long long b = 1; b <= n; ++b) {
        long long multiples = n / b;
        
        total_triples += multiples * multiples;
    }
    
    cout << total_triples << "\n";
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