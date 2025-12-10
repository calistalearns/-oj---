# include <stdio.h>
int main()
{
    int arr[10]={0};
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<9;i++)
    {
        int min=i;
        for(int j=i+1;j<10;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
            
        }
        if(min!=i)
            {
                int temp=arr[min];
                arr[min]=arr[i];
                arr[i]=temp;
                
            }
    }
     for(int i=0;i<10;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}