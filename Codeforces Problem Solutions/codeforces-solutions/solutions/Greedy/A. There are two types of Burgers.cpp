#include <bits/stdc++.h>
using namespace std;

void solve() {
    int b, p, f;
    cin >> b >> p >> f;
    
    int h, c;
    cin >> h >> c;
    
    int profit = 0;
    
    if (h >= c) {
        int make_h = min(b / 2, p);
        profit += make_h * h;
        b -= make_h * 2;
        
        int make_c = min(b / 2, f);
        profit += make_c * c;
    } 
    else {
        int make_c = min(b / 2, f);
        profit += make_c * c;
        b -= make_c * 2;
        
        int make_h = min(b / 2, p);
        profit += make_h * h;
    }
    
    cout << profit << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}