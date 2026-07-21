#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a1, a2, a4, a5;
    cin >> a1 >> a2 >> a4 >> a5;
    
    vector<int> candidates = {
        a1 + a2, 
        a4 - a2, 
        a5 - a4  
    };
    
    int max_fibonacciness = 0;
    for (int a3 : candidates) {
        int count = 0;
        if (a3 == a1 + a2) count++;
        if (a4 == a2 + a3) count++;
        if (a5 == a3 + a4) count++;
        max_fibonacciness = max(max_fibonacciness, count);
    }
    cout << max_fibonacciness << "\n";
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