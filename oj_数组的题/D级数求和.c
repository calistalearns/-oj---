# include <stdio.h>
int main()
{
    int k=0;
    scanf("%d",&k);
    double s=0.0;
    int count=0;
    for(int i=1;;i++)
    {
        s+=1.0/i;
        count=i;
        if(s>k)
            break;

    }
            
    printf("%d\n",count);
        
   
    return 0;
}