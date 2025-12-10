#include <stdio.h>
int evernum(int num)
{
    int sum=0;
    while(num>0)
    {
        sum+=num%10;
        num/=10;
    }
    return sum;
}
int main()
{
    int input;
    while (scanf("%d", &input) == 1)
    {
        int arr[input];
        for (int i = 0; i < input; i++)
        {
            scanf("%d", &arr[i]);
        }
        
        for (int j = 0; j < input - 1; j++)
        {
            for (int k = 0; k < input - 1 - j; k++)
            {
                int sum1=evernum(arr[k]);
                int sum2=evernum(arr[k+1]);
                if (sum1>sum2||(sum1==sum2&&arr[k]>arr[k+1]))
                {
                    int c = arr[k];
                    arr[k] = arr[k + 1];
                    arr[k + 1] = c;
                }
            }
        }
        
        for (int i = 0; i < input; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}