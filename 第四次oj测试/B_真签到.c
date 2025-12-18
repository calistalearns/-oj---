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
    int found=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                for(int y=0;y<n;y++)
                {
                    if(arr[i]==arr[j]+arr[k]+arr[y])
                    {
                        printf("Yes\n");
                        found=1;
                        break;
                    }
                }
            }
        }
    }
    if(!found)
    printf("N0\n");
    return 0;
}