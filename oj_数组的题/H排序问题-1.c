# include <stdio.h>
int main()
{
    int arr[10]={0};
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<9;i++)
    {
        
        for(int j=0;j<9-i;j++)
        {
            if(arr[j]<arr[j+1])
            {
                int a=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=a;
            }
        }
    }
    for(int i=0;i<10;i++)
        printf("%d ",arr[i]);
    return 0;
}