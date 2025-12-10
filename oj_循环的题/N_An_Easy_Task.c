# include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        int y,n;//起始年份和第几个闰年  
        int count=0;
        int N=0;
        scanf("%d%d",&y,&n); 
        int Y=y;
        while(1)
        {
            if((Y%400==0)||((Y%4==0)&&(Y%100!=0)))
            {
              N++;
            }
            if(N==n)
            {
                printf("%d\n",Y);
                break;
            }
            count++;
            Y=y+count;         
        }           
    }
    return 0;
}