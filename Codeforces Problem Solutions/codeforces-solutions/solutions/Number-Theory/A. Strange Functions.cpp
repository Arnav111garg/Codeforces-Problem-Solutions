#include <iostream>
#include <string>
using namespace std;
 
void solve() {
    string n;
    cin >> n;
    cout << n.length() << "\n";
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