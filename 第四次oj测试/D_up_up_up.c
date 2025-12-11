# include <stdio.h>
int main()
{
    //就是不能有相等一样的对吗？
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int j=0;j<n;j++)
        {      
            scanf("%d",&arr[j]);
        }
        int found=1;
        for (int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]==arr[i])
                {
                    found=0;
                    break;
                }
            }
            
        }   
        if(found)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}