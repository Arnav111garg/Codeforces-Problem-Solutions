#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b, l;
    cin >> a >> b >> l;

    unordered_set<long long> valid_k;
    
    long long pow_a = 1;
    while (pow_a <= l) {
        if (l % pow_a == 0) {
            long long temp = l / pow_a;
            long long pow_b = 1;
            
            while (temp % pow_b == 0) {
                valid_k.insert(temp / pow_b);
                pow_b *= b;
            }
        }
        pow_a *= a;
    }

    cout << valid_k.size() << "\n";
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