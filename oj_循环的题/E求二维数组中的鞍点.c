#include <stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int arr[m][n];
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    int found = 0;
    int result[100]; // 存储找到的马鞍点
    int count = 0;   // 马鞍点个数
    
    for(int i=0;i<m;i++)
    {
        int min_j = 0;
        for(int j=1;j<n;j++)
        {
            if(arr[i][j] < arr[i][min_j])
            {
                min_j = j;
            }
        }
        
        int yes = 1;
        for(int k=0;k<m;k++)
        {
            if(arr[k][min_j] < arr[i][min_j]) 
            {
                yes = 0;
                break;
            }
        }
        
        if(yes)
        {
            result[count] = arr[i][min_j]; // 存马鞍点
            count++;
            found = 1;
        }
    }
    
    for(int i=0;i<count-1;i++)
    {
        for(int j=0;j<count-1-i;j++)
        {
            if(result[j] > result[j+1])
            {
                int temp = result[j];
                result[j] = result[j+1];
                result[j+1] = temp;
            }
        }
    }

    for(int i=0;i<count;i++)
    {
        printf("%d ",result[i]);
    }
    
    return 0;
}