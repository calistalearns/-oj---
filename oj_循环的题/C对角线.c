# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int a=0;
    for(int i=0;i<n;i++)
    {
        a+=arr[i][i];
    }

    int b=0;
    for(int i=0,j=n-1;i<n,j>=0;i++,j--)
    {
        b+=arr[i][j];
    }
    if(n%2==0)//偶数
    {
        int c=a+b;
        printf("%d\n",c);
    }
    else
    {
        int c=a+b-arr[(n/2)][(n/2)];
        printf("%d\n",c);
    }
    
    
    return 0;
}