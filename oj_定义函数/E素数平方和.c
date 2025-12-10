# include <stdio.h>
int susu()
{
    int m,n;
    int a=0;
    int arr[1000]={0};
    scanf("%d%d",&m,&n);
    for(int i=m;i<=n;i++)
    {
        if(i<=1)continue;
        int found=1;
        for(int j=2;j<i;j++)
        {
            
            if(i%j==0)
            {
                found=0;
                break;
            }
        }
        if(found==1)
        {
            arr[a]=i;
            a++;
        }
    }
    int b=0;
    for(int i=0;i<a;i++)
    {
        b+=arr[i]*arr[i];
    }
    printf("%d",b);
    return 0;
}
int main()
{
    susu();
    return 0;
}