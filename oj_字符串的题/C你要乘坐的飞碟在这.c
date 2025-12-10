# include <stdio.h>
# include <string.h>
int main()
{
    //65_90
    char strt[8]={0};
    char strh[8]={0};
    int a=0,b=0;
    fgets(strt,sizeof(strt),stdin);
    while(strt[a]!='\0')
    {
        if(strt[a]=='\n')
        {
            strt[a]='\0';
            break;
        }
        a++;
    }
    int len1=strlen(strt);
    fgets(strh,sizeof(strh),stdin);
    while(strh[b]!='\0')
    {
        if(strh[b]=='\n')
        {
            strh[b]='\0';
            break;
        }
        b++;
    }
    int len2=strlen(strh); 

    int result1=1,result2=1;
    for(int i=0;i<len1;i++)
    {
        result1*=(strt[i]-'A'+1);
    }
    for(int i=0;i<len2;i++)
    {
        result2*=(strh[i]-'A'+1);
    }
    if(result1%47==result2%47)
    {
        printf("GO\n");
    }
    else
    {
        printf("STAY\n");
    }
    return 0;
}