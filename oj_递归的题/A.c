# include <stdio.h>
int result(int m,int n)
{
    if(m==0||n==1)
        return 1;
    else if(n==0)
    {
        return 0;
    }
    else if(m<n)
    {
        return result(m,m);
    }
    else
    {
        return result(m,n-1)+result(m-n,n);
    }

}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int m,n;
        scanf("%d%d",&m,&n);
        printf("%d\n",result(m,n));
    }

    return 0;
}