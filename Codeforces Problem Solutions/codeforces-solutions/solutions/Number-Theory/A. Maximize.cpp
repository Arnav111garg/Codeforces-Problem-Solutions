#include <iostream>
#include <vector>
using namespace std;
 
void solve() {
    int x;
    cin >> x;
    cout << x - 1 << "\n";
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