#include <bits/stdc++.h>
using namespace std;

void solve() {
    int y;
    cin >> y;

    while (true) {
        y++; 
        
        int a = y / 1000;       
        int b = (y / 100) % 10; 
        int c = (y / 10) % 10;  
        int d = y % 10;

        if (a != b && a != c && a != d && b != c && b != d && c != d) {
            cout << y << "\n";
            break;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    while (t--) {
        solve();
    }

    return 0;
}