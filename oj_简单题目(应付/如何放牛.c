# include <stdio.h>
# include <stdlib.h>

int com(const void *a,const void *b)
{
    return *(int*)a-*(int*)b;//升序
}


int c(int *arr,int n,int m,int mid)
{
    int count=1;
    int last=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]-last>=mid)
        {
            count++;
            last=arr[i];
            if(count>=m)
            return 1;
        }
    }
    return 0;
}

int main()
{
    //n个牛栏，m头牛
    int n,m;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        //最大的最小距离
        //先找出两种最小举例，再在最小的种种距离里面找最大的
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        int arr1[n];
        //从小到大排序
        qsort(arr,n,sizeof(int),com);

        int low=0;
        int high=arr[n-1]-arr[0];
        int anser;
        
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(c(arr,n,m,mid))
            {
                anser=mid;
                low=mid+1;
            }
            else
            high=mid-1;
        }
        printf("%d\n",anser);

    }
    return 0;
}