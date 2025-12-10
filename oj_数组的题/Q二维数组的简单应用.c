# include <stdio.h>
int main()
{
    int arr[2][5]={0};
    int arr_1[2][5]={0};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<5;j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr_1[i][j];
            arr_1[i][j]=temp;
        }
    }

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("%d ",arr_1[i][j]);
        }
    }
    
    
    return 0;
}