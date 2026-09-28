#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    set<int> unique_elements;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        unique_elements.insert(x);
    }
    
    cout << unique_elements.size() << "\n";
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