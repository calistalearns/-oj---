# include <stdio.h>
int main()
{
    int arr[2][5]={0};
    int arr_1[5]={0};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<5;i++)
    {
        int temp=arr[0][i]+arr[1][i];
        arr_1[i]=temp;
    }
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr_1[i]);
    }
    return 0;
}  