# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int found=1;
    for (int i=1;i<n;i++)
    {
        if(arr[0]!=arr[i])
        {
            found=0;
            break;
        }
    }
    if(found)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}