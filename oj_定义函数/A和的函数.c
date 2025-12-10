# include <stdio.h>
int add(int a,int b)
    {      
        return a+b;
    }
int main()
{
   int n;
   scanf("%d",&n);
   getchar();
   
   for(int i=0;i<n;i++)
   {
    int a,b;
    scanf("add(%d,%d)",&a,&b);
    getchar();    
    printf("%d\n", add(a, b));
   }
    return 0;
}