# include <stdio.h>
int G(int a,int b)
{
    if(b==0)
        return a;
    else
        return  G(b,a%b);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",G(a,b));
    return 0;
}