#include <stdio.h>

long long fbo(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    long long a = 1, b = 1, c;
    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main()
{
    int n;
    while (scanf("%d", &n) != EOF && n > 0)
    {
        if (n >= 1 && n <= 30)
        {
            printf("%lld\n", fbo(n));
        }
    }
    return 0;
}