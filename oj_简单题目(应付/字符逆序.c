# include <stdio.h>
# include <string.h>
int main()
{
    char srr[1000];
    fgets(srr,sizeof(srr),stdin);
    srr[strcspn(srr,"\n")]='\0';
    int len=strlen(srr);
    for(int i=len-1;i>=0;i--)
        printf("%c",srr[i]);
    return 0;
}