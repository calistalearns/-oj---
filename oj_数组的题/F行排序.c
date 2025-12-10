#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);
    int arr[100][100] = {0};
    double avg[100] = {0}; //平均值
    
    for(int i = 0; i < n; i++) 
    {
        int sum = 0;
        for(int j = 0; j < n; j++) 
        {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
        avg[i] = (double)sum / n; // 每行的平均值
    }
    
    // 冒泡
    for(int i = 0; i < n - 1; i++) 
    {
        for(int j = 0; j < n - 1 - i; j++) 
        {
            if(avg[j] > avg[j + 1]) 
            {
                // 交换整行数据....
                for(int k = 0; k < n; k++) 
                {
                    int temp = arr[j][k];
                    arr[j][k] = arr[j + 1][k];
                    arr[j + 1][k] = temp;
                }
                // 交换平均值...
                double temp_avg = avg[j];
                avg[j] = avg[j + 1];
                avg[j + 1] = temp_avg;
            }
        }
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d", arr[i][j]);
            if(j < n - 1) printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}