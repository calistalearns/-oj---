# include <stdio.h>
# include <string.h>
int main()
{
 int d;
 char str[11]={0};
 scanf("%s",str);
 d=strlen(str);
 int ch[d];
 for(int i=0;i<d;i++)
 {
    ch[i]=str[i]-'0';//变整型
 }
 char strr[11]={0};
 while(scanf("%s",strr)!=EOF)
 {
    for(int i=0;i<d;i++)
    {
        ch[i]=(ch[i]+(strr[i]-'0'))%10;
    }
 }
 for(int i=0;i<d;i++)
 {
    printf("%d",ch[i]);
 }
    return 0;
}