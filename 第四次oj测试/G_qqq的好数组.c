# include <stdio.h>
int main()
{
    int n,q;
    scanf("%d%d",&n,&q);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //找最大值为对比？
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    int ok=1;
    for(int i=0;i<n;i++)
    {
        while(arr[i]<max)
        {
            arr[i]+=q;
        }
        if(arr[i]!=max)
        {
            ok=0;
            break;
        }
    }
    if(ok)
    printf("YES\n");
    else
    printf("NO\n");
    return 0;
}