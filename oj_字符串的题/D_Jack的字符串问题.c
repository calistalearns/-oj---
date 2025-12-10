# include <stdio.h>
# include <string.h>
int main()
{
    char str[101]={0};
    while(scanf("%s",str)!=EOF)
    {
        int len=strlen(str);
        int bj[101]={0};

        for(int i=0;i<len;i++)
        {
            if(bj[i])continue;
            char a=str[i];
            int count=0;
            int ch[101]={0};//存角标的
            for(int j=i;j<len;j++)
            {

                if(a==str[j])
                {
                    ch[count]=j;
                    count++;
                    bj[j]=1;
                }     
            }
            if(count>1)
            {
                for(int k=0;k<count;k++)
                {
                    printf("%c:%d",a,ch[k]);
                    if (k < count - 1) 
                        printf(",");
                }
                printf("\n");
            }
        }
    }
    return 0;
}