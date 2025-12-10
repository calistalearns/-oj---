//有n个数，数的范围都在20以内（包括20），然后现在我要统计1-20分别出现的次数是多少
# include <stdio.h>
int main()
{
    int n;//你输总个数
    int num;//具体数字
    int arr[21]={0};

    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);
            if(num>=1&&num<=20)
            {
                arr[num]++;
            }
    }
    for(int i=1;i<=20;i++)
    {
        printf("%d:%d\n",i,arr[i]);
    }
    return 0;
}