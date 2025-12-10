# include <stdio.h>
int main()
{
    int arr[10]={0};
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(int j=0;j<=5;j++)
    {
        int a=arr[j];
        arr[j]=arr[9-j];
        arr[9-j]=a;
    }
    for(int i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}