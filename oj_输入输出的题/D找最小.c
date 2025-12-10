# include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[10]={0};
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    int a=0;
    for(int i=1;i<10;i++)
    {
        if(abs(arr[i])<abs(arr[a]))
        {
            a=i;
        }
    }
   
    if(a!=9)
    {
         int b=arr[a];
        arr[a]=arr[9];
        arr[9]=b;
    }
    for(int i=0;i<10;i++)
    {
        printf("%d",arr[i]);
        if(i<9)
         printf(" ");
    }
    printf("\n");
    return 0;
}