# include <stdio.h>
# include <string.h>
int main()
{
    char str[1000],s[100];
    scanf("%s",str);
    scanf("%s",s);
    int count=0;
    int len=strlen(str);
    int len1=strlen(s);
    for(int i=0;i<len;i++)
    {
        if(strncmp(str+i,s,len1)==0)
        count++;
    }

    printf("%d\n",count);
    return 0;
}