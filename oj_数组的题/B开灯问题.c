# include <stdio.h>
int main()
{
    int n=0,k=0;//总数和人数
    scanf("%d %d",&n,&k);
    //有n盏灯，编号为1-n
    int count[1001] = {0};
    for(int a=1;a<=k;a++)
    {
        
        for(int b=1;b<=n;b++)
        {
            if(b%a==0)
            {
                count[b]++;              
            }
        }

    }
    for (int b = 1; b <= n; b++) 
    {
        if (count[b] % 2 != 0)
        { 
            printf("%d ", b);
        }
    }
    printf("\n");
    return 0;
}