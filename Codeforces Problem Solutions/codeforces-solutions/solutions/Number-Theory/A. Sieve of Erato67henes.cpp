#include <iostream>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    bool has_67 = false;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        if (a == 67) {
            has_67 = true;
        }
    }
    
    if (has_67) {
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