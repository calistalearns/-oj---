# include <stdio.h>
long long susu(long long x)
{
    for(int i=2;i<=x;i++)
    {
        int flag=1;
        for(int j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            printf("%lld\n",i);
        }
    }
}

int main()
{
    long long n;
    while(scanf("%lld",&n)!=EOF)
    {
        susu(n);
    }
    return 0;
}