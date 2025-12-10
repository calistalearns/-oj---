# include <stdio.h>
int main()
{
    int j=0;
    while(scanf("%d",&j)!=EOF&&j>0)
    {
        int arr[100]={0};
        int count1=0,count2=0,count3=0;
        for(int i=0;i<100;i++)
        {
            scanf("%d",&arr[i]);
            if (arr[i] <= 0)
        {
                break;
        }
            if(arr[i]>85)
        {
            count1++;
        }
            else if(arr[i]<=85&&arr[i]>=60)
        {
            count2++;
        }
            else
        {
            count3++;
        }

        }
        printf(">=85:%d\n",count1);
        printf("60-84:%d\n",count2);
        printf("<60:%d\n",count3);
    }
    return 0;
}