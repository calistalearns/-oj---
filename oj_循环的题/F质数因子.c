# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i=3;
        while(n%2==0)
        {
            printf("2 ");
            n/=2;
        }
    
    for(int i=3;n>1;i+=2)
    {
        while(n%i==0)
        {
            printf("%d ",i);
            n/=i;
        }
    }          
    return 0;
}