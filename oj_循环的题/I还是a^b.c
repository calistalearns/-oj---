#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t); 
    for (int i = 0; i < t; i++) 
    {
        int a, b;
        scanf("%d%d", &a, &b);
        int result = 1;
        for (int j = 0; j < b; j++) 
        {
            result = (result * a) % 10000;
        }
        
        if (result < 10) 
        {
            printf("000%d\n", result);
        } else if (result < 100) 
        {
            printf("00%d\n", result);
        } else if (result < 1000) 
        {
            printf("0%d\n", result);
        } else 
        {
            printf("%d\n", result);
        }
    }
    
    return 0;
}