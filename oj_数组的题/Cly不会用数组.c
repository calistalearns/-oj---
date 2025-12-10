# include <stdio.h>
int main()
{
    int m=0;
    scanf("%d",&m);
    int arr[18]={0};
    int n=0;
    int b=m;
    while(b>0)
    {
        arr[n]=b%10;
        b=b/10;
        n++;
    }
    for(int i=0;i<n-1;i++)
    {
        int mix=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[mix]>arr[j])
            {
                mix=j;
            }
        }
        if(mix!=i)
        {
            int c=arr[i];
            arr[i]=arr[mix];
            arr[mix]=c;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}