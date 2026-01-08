# include <stdio.h>
# include <math.h>
int main()
{
    int n,m;
    double v=0.0;//变黑程度，变白比率，m天变黑后程度
    scanf("%d",&n);
    scanf("%d%lf",&m,&v);
    double N=n*pow((1-v),m);
    printf("%.1f\n",N);
    return 0;
}