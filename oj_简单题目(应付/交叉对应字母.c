# include <stdio.h>
# include <string.h>
int main()
{
    char s1[100];
    char s2[100];
    scanf("%s",s1);
    int len1=strlen(s1);
    scanf("%s",s2);
    int len2=strlen(s2);
    int len=len1+len2;
    char s[len+1];
    int count1=0;
    int count2=0;
    for(int i=0;i<len;i+=2)
    {
        if(count1<len1)
            s[i]=s1[count1++];
    }
    for(int i=1;i<len;i+=2)
    {
        if(count2<len2)
            s[i]=s2[count2++];
    }

    s[len]='\0';
    printf("%s",s);
    return 0;
}