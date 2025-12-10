# include <stdio.h>
int main()
{
    int arr_1[7]={0};
    for(int i=0;i<7;i++)
    {
        scanf("%d",&arr_1[i]);
    }
   
    int arr_2[3]={0};
    for(int i=2,j=0;i<=4,j<3;i++,j++)
    {
        int temp=arr_2[j];
        arr_2[j]=arr_1[i];
        arr_1[i]=temp;
    }
    for(int i=0;i<3;i++)
    {
        printf("%d ",arr_2[i]);
    }
    return 0;
}