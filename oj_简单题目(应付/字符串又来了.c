# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    char s[1000];
    int count=0;
    while(fgets(s,sizeof(s),stdin)!=NULL)
    {
        count++;
        if(count<=n)
        {
            printf("%s",s);
        }
        else
        {
            for(int i=0;s[i]!='\0';i++)
            {
                if(s[i]==' ')
                {
                    printf("\n");
                }
                else
                {
                    printf("%c",s[i]);
                }
            }
        }
        printf("\n");
    }
    return 0;
}