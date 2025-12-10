# include <stdio.h>

int isLeap(int year)
{
    int a;
    if((year%400==0)||(year%4==0&&year%100!=0))
    {
        a=1;
    }  
    else
    {
        a=0;
    }
    return a;
}  

int main()
{

    int year;
    while(scanf("%d",&year)!=EOF)
    {
        if(isLeap(year)==1)
        printf("yes\n");
        else
        printf("no\n");
    }
    return 0;
}