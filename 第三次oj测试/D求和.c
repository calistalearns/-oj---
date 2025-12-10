#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    long long sum_a= 0;
    long long sum_s= 0;

    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
        sum_a+= arr[i];
        sum_s+= (long long)arr[i] * arr[i];
    }

    long long result = (sum_a* sum_a- sum_s) / 2;
    printf("%lld\n", result);
    return 0;
}