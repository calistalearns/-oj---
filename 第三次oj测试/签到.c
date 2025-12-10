# include <stdio.h>
# include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    char arr[n][100];
    for(int i=0;i<n;i++)
    {
        fgets(arr[i],100,stdin);
        int len=strlen(arr[i]);
        if(arr[i][len-1]=='\n')
        {
            arr[i][len-1]='\0';
        }     
    }
    for(int j=0;j<n;j++)
    {
        printf("%s ",arr[j]);
    }

    return 0;
}