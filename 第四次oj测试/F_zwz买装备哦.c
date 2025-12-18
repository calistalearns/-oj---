# include <stdio.h>
int main()
{
    //n,x,y,z,t分别代表商店的装备数量、小红身上的装备攻击、防御、回收价格，以及小红携带的金币
    int n,x,y,z,t;
    scanf("%d%d%d%d%d",&n,&x,&y,&z,&t);
    for(int i=0;i<n;i++)
    {
        int arr[3]={0};
        for(int j=0;j<3;j++)
        {
            scanF("%d",arr[j]);
        }
    }
    return 0;
}
