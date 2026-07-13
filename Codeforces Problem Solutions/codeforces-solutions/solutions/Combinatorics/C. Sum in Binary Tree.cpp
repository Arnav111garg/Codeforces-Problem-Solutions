#include <stdio.h>

void solve() {
    long long n;
    
    if (scanf("%lld", &n) != 1) return;
    
    long long total_sum = 0;
    
    
    while (n > 0) {
        total_sum += n;
        n /= 2; 
    }
    
    printf("%lld\n", total_sum);
}

int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
