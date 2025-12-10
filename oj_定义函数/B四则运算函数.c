# include <stdio.h>
# include <string.h>
//add(a,b)=a+b; sub(a,b)=a-b; mul(a,b)=a*b; div(a,b)=a/b
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
float div(int a,int b)
{
    if (b==0)
    {
        printf("error\n");
        return 1;
    }
    else
    {
        if(a%b!=0)
        {
            return a/b;
        }
        else
        return (int)a/b;
    }
    
}
int main()
{
    int str[5]={0};
    strcmp()

    return 0;
}