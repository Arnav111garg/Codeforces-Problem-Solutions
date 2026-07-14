#include <iostream>
#include <vector>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    long long sum = 0;
    bool has_mod_1 = false;
    
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        sum += a;
        if (a % 3 == 1) {
            has_mod_1 = true;
        }
    }
    
    if (sum % 3 == 0) {
        cout << 0 << "\n";
    } else if (sum % 3 == 2) {
        cout << 1 << "\n";
    } else { // sum % 3 == 1
        if (has_mod_1) {
            cout << 1 << "\n";
        } else {
            cout << 2 << "\n";
        }
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