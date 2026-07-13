#include <iostream>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    int k = n / 2;
    cout << k << "\n";
    
    if (n % 2 == 0) {
        for (int i = 0; i < k; i++) {
            cout << 2 << (i == k - 1 ? "" : " ");
        }
    } 
    else {
        for (int i = 0; i < k - 1; i++) {
            cout << 2 << " ";
        }
        cout << 3;
    }
    cout << "\n";
    
    return 0;
}