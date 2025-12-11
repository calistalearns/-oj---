#include <stdio.h>
#include <math.h>

long long day(int n) {
    return (long long)pow(2, n) - 1;
}

int main() {
    int n, i;
    int pan[23];
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        scanf("%d", &pan[i]);
    }
    
    for(i = 0; i < n; i++) {
        long long days = day(pan[i]);
        printf("%lld天\n", days);
    }
    
    return 0;
}