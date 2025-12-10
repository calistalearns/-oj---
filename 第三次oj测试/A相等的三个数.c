# include <stdio.h>
int main()
{
    int arr[3]={0};
    for(int i=0;i<3;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int max=arr[0];
    for(int i=0;i<3;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    int count=0;
    for(int i=0;i<3;i++)
    {
        while(arr[i]<max)
        {
            count++;
            arr[i]+=1;
        }       
    }
    printf("%d\n",count);   
    return 0;
}