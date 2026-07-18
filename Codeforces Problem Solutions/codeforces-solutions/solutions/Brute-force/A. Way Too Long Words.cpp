#include <iostream>
using namespace std;
 
void solve() {
    string word;
    cin >> word;
 
    int length = word.length();
 
    if (length > 10) {
        cout << word[0] << (length - 2) << word[length - 1] << "\n";
    } else {
        cout << word << "\n";
    }
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