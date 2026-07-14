#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long a, b;
    cin >> a >> b;
    
    long long smaller = min(a, b);
    
    long long ans = 1;
    for (int i = 1; i <= smaller; ++i) {
        ans *= i;
    }
    
    cout << ans << "\n";
    
    return 0;
}