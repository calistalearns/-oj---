# include <stdio.h>


int main()
{
    int M;//未去重的总数  
    scanf("%d",&M);

    int arr[M];
    for(int i=0;i<M;i++)//进行多少m次，搞m各数..输入
    {       
        scanf("%d",&arr[i]);       
    }
    //开搞排序
    for(int i=0;i<M-1;i++)
        {
            for(int j=0;j<M-1-i;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int b=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=b;
                }
            }
        }
    //输出去重的总数
    int c=0;
    if(M>0)
    {
        c=1;
        for(int i=1;i<M;i++)
        {
            if(arr[i]!=arr[i-1])
            {
            c++;
            }
        }
    }
    printf("%d\n",c);
    //数组
    if(M>0)
    {
        printf("%d", arr[0]);
        for(int i=1;i<M;i++)
        {
            if(arr[i]!=arr[i-1])
            {
            printf(" %d",arr[i]);
            }
        }
    }
    printf("\n");
    return 0;
}