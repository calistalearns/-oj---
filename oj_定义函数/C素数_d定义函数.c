# include <stdio.h>
int ss(int a)
{
    if(a>=2)
    {
        printf("2 ");      
    }
    int c;
    for(int i=3;i<=a;i++)
    {
        c=1;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                c=0;
                break;
            }           
        }
        if(c==1)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    ss(n);
    return 0;
}