# include <stdio.h>
//来个公约数函数
int G(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return(G(b,a%b));
    }
}
int main()
{
   int a,b,c,d;
   char o;
   while(scanf("%d/%d%c%d/%d",&a,&b,&o,&c,&d)!=EOF)
   {
    int fz,fm;
    if(b==d)
    {
        fm=b;
        if(o=='-')
        fz=a-c;
        if(o=='+')
        fz=a+c;
    }
    else
    {
        fm=b*d;
        if(o=='-')
        fz=a*d-c*b;
        if(o=='+')
        fz=a*d+c*b;
    }
    if(fz==0)
    {
        printf("0\n");
        continue;
    }
    int g=G(fz>0?fz:-fz,fm > 0 ? fm : -fm);
    fm/=g;
    fz/=g;
    if(fm==1)
    printf("%d\n",fz);
    else
    {
        if(fm<0)
        {
            fz=-fz;
            fm=-fm;
        }
        printf("%d/%d\n",fz,fm);
    }   
   }
    return 0;
}