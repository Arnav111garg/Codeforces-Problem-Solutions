
#include <iostream>
using namespace std;
 
void solve() {
    long long n;
    cin >> n;
 
    int count = 0;
 
    for (int i = 1; i <= 9; i++) {
        long long current = i;
        
        while (current <= n) {
            count++;
            current = current * 10 + i;
        }
    }
 
    cout << count << "\n";
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