# include <stdio.h>
int main()
{
    //管理方便度f(i)=第i个小组能力值最大的-第i个小组能力值最小的
    //n个学生分成k组
    int n,k;
    scanf("%d %d",&n,&k);
    int m=n/k;//每组多少人

    int a[k][m];
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    int f[k];//管理方便度
    for(int i=0;i<k;i++)//竖着来
    {

        int max=a[i][0];
        int min=a[i][0];
        f[i]=max-min;
        for(int j=1;j<m;j++)
        {
            if(a[i][j]>max)
                max=a[i][j];
            if(a[i][j]<min)
                min=a[i][j];
            f[i]=max-min;
        }
    }

    int MAX=f[0];
    for(int i=1;i<k;i++)
    {
        if(f[i]>MAX)
        {
            MAX=f[i];
        }
    }
    printf("%d",MAX);
    return 0;
}