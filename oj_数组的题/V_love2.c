# include <stdio.h>
# include <stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    char s[9];
    for(int i=0;i<n;i++)
    {
        scanf("%8s",s);
        long num=strtol(s,NULL,2);
        printf("%c",(char)num);
    }
    return 0;
}