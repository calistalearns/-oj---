#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int arr[t];
    for(int i = 0; i < t; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < t; i++)
    {
        int s = 0;
        int S = 0;
        int a = arr[i];
        for(int j = 1; j <= a; j++)
        {
            s += j;
            S += s; 
        }
        
        printf("%d\n", S);
    }
    
    return 0;
}