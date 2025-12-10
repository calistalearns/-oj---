# include <stdio.h>
# include <math.h>

int main()
{
    int h,u,d,f;//井深度，白天爬，晚上滑，疲劳度
    while(scanf("%d%d%d%d",&h,&u,&d,&f)==4)
    {
        if(h==0)
        break;
        double height=0.0;
        double papa=u;
        double dec=u*f/100.0;
        int day=0;
        while(1)
        {
            day++;
            if(papa>0)
            {
                height+=papa;
            }
            if(height>h)
            {
                printf("success on day %d\n",day);
                break;
            }
            height-=d;
            if(height<0)
            {
                printf("failure on day %d\n",day);
                break;
            }
            papa-=dec;
            if(papa<0)
            {
                papa=0;
            }
        }
    } 
    return 0;
}