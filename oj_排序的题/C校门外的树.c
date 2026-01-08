# include<stdio.h>
int main()
{
    int l,m;
    int count=0;
    int result=0;
    scanf("%d%d",&l,&m);//长度与数目
    for(int i=0;i<m;i++)
    {
        int arr[2]={0};
        for(int j=0;j<2;j++)
        {
            scanf("%d",&arr[j]);
        }
        count=arr[1]-arr[0]+2;
        l-=count;
        result=l;
    }
    
    printf("%d\n",result);

    return 0;
}