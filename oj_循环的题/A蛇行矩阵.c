#include <stdio.h>

int main() 
{
    int n;
    while (scanf("%d", &n) != EOF) 
    {
        int x[n][n];
        int num = 1;
        //斜着存储
        for (int k = 0; k < n; k++) 
        {
            for (int i = k, j = 0; i >= 0; i--, j++) 
            {
                x[i][j] = num++;
            }
        }
        
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < n - i; j++) 
            {
                printf("%d", x[i][j]);
                if (j < n - i - 1) 
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}