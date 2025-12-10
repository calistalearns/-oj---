# include <stdio.h>
int main()
{
    int n;
    int arr[100]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=0;
    for(int j=1;j<n;j++)
    {
        if(arr[j]>arr[max])
        {
            int a=arr[max];
            arr[max]=arr[j];
            arr[j]=a;          
        }
    }
    printf("%d",arr[max]);
    return 0;
}