# include <stdio.h>
int main()
{
    int n=0;
    int arr[20]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int a=arr[0];
    for(int j=1;j<n;j++)
    {
        if(a>arr[j])
        {
            printf("NO");
            break;
        }
        
        else if(arr[j]>arr[j-1])
        {
            printf("YES");
            break;
        }
        
    }

    return 0;
}