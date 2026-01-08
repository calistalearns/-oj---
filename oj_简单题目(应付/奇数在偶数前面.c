# include <stdio.h>
int main()
{
    //奇降，偶升
    int odd[100]={0};
    int even[100]={0};
    int arr;
    int oddcount=0,evencount=0,n=0;
    while(scanf("%d",&arr)==1)
    {
        if(arr%2==0)//偶数
        {
            even[evencount]=arr;
            evencount++;
        }
        else
        {
            odd[oddcount]=arr;
            oddcount++;
        }
        n++;
        if(getchar()=='\n')
        break;
    }

    for(int i=0;i<oddcount-1;i++)
    {
        for(int j=0;j<oddcount-1-i;j++)
        {
            if(odd[j]<odd[j+1])
            {
                int temp=odd[j];
                odd[j]=odd[j+1];
                odd[j+1]=temp;
            }
        }
    }

    for(int i=0;i<evencount-1;i++)
    {
        for(int j=0;j<evencount-1-i;j++)
        {
            if(even[j]>even[j+1])
            {
                int temp=even[j];
                even[j]=even[j+1];
                even[j+1]=temp;
            }
        }
    }
    for(int i=0;i<oddcount;i++)
        printf("%d ",odd[i]);
    for(int i=0;i<evencount;i++)
        printf("%d ",even[i]);
    return 0;
}