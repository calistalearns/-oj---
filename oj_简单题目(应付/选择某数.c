#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    long long D;
    scanf("%lld", &D);

    long long diff = -1;
    long long max_x = (long long)sqrt(D);

    for (long long x = 0; x <= max_x; x++) {
        long long rem = D - x * x;
        long long y = (long long)sqrt(rem);
        long long c_y[2] = {y, y + 1};

        for (int i = 0; i < 2; i++) {
            long long sum = x * x + c_y[i] * c_y[i];
            long long diff1 = llabs(sum - D);

            if (diff == -1 || diff1 < diff) {
                diff = diff1;
            }
            if (diff == 0) {
                printf("%lld\n", diff);
                return 0;
            }
        }
        if (rem < 0) {
            break;
        }
    }
    printf("%lld\n", diff);
    return 0;
}