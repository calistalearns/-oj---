# include <stdio.h>

long long  forOne(int X)// 计算单个数的阶乘 X为正整数 
{
    if(X<=1)
    return 1;
    else
    return X*forOne(X-1);
}

long long forAll(int N)// 全部数值计算 N为正整数
{
    long long b=0;
    for(int i=1;i<=N;i++)
    {
        b+=forOne(i);
    }
    return b;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%lld\n",forAll(n));
    return 0;
}