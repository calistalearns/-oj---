# include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int arr[t][2];
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int n=0;n<t;n++)
    {
        int N=arr[n][0];
        int M=arr[n][1];
        // int C(N,M)=M!/(N! * (M-N)!);
        int i,j,k;
        int a=1,b=1,c=1;
        for(i=M;i>0;i--)
        {
            a*=i;
        }
        for(j=N;j>0;j--)
        {
            b*=j;
        }
        for(k=(M-N);k>0;k--)
        {
            c*=k;
        }
        int d=a/(b*c);
        printf("%d\n",d);
    }
    return 0;
}