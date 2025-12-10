# include <stdio.h>
int jc(int n)
{
    int a=1;
    for(int i=1;i<=n;i++)
    {
        a*=i;
    }
    return a;
}

int main()
{
    int n;E: 素数平方和
    scanf("%d",&n);
    printf("%d\n",jc(n));
    return 0;
}