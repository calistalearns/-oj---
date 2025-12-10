# include <stdio.h>
# include <string.h>
int main()
{
    char arr[1000];
    fgets(arr,sizeof(arr),stdin);
    int len=strlen(arr);
    if(len>0&&arr[len-1]=='\n')
    {
        arr[len-1]='\0';
        len--;
    }
    for(int i=0;i<len;i++)
    {
        char c=arr[i];
        for(int j=7;j>=0;j--)
        {
            if(c&(1<<j))
            printf("1");
            else
            printf("0");
        }
        printf("\n");
    }
    return 0;
}