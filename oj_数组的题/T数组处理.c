# include <stdio.h>
int main()
{
    int arr[2][5]={0};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int c1,c2,c3,max=arr[0][0];
    int s1=0,s2=0;
    for(int i=0;i<5;i++)
    {      
        s1+=arr[0][i];
        s2+=arr[1][i];
    }
    c1=s1/5;
    c2=s2/5;
    c3=(s1+s2)/10;
    printf("%d %d %d",c1,c2,c3);
    int arr1[10]={0};
    for(int i=0;i<2;i++)
    {
        for(int j=0,k=0;j<5,k<10;j++,k++)
        {
            arr1[k]=arr[i][j];
        }
    }
    for(int i=1;i<9;i++)
    {
        for(int j=1;j<9-i;j++)
        {
            if(arr1[j]>max)
            {
                max=arr1[j];
            }
        }
    }
    printf(" %d\n",max);
    return 0;
}