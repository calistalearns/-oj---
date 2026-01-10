# include <stdio.h>
# include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char str[n][1000];
    getchar();
    int len[n];
    for(int i=0;i<n;i++)
    {
        scanf("%s",str[i]);
        len[i]=strlen(str[i]);
    }
    
    int found=0;//角标？。
    for(int i=0;i<n;i++)
    {
        int count_ab=0,count_ba=0;
       
        if(len[i]==1)
        {
            printf("0\n");
            printf("%s\n",str[i]);
        }
        else
        {
            for(int j=0;j<len[i]-1;j++)
            {
                if(str[i][j]=='a'&&str[i][j+1]=='b')
                    count_ab++;
                if(str[i][j]=='b'&&str[i][j+1]=='a')
                    count_ba++;
            }
            if(count_ab==count_ba)
            {
                printf("0\n");
                printf("%s\n",str[i]);
            }
            else
            {
                str[i][len[i]-1]=str[i][0];
                printf("1\n");
                printf("%s\n",str[i]);
            }
        }
    }
    return 0;
}