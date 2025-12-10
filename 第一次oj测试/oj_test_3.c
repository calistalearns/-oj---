# include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int a,b,c;
    for(int i=0;i<t;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        //printf("\n");
        if((a >= b && a <= c) || (a >= c && a <= b))
            printf("%d\n",a);
        else if((b >= a && b <= c) || (b >= c && b <= a))
            printf("%d\n",b);
        else
            printf("%d\n",c);
    }
    return 0;
}