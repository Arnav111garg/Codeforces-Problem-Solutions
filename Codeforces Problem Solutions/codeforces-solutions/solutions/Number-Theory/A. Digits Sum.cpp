#include <iostream>
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
    cout << (n + 1) / 10 << "\n";
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