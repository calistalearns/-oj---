# include <stdio.h>
int main()
{
    int m;//进入总人数
    scanf("%d",&m);
    char number[m+1][10000];

    int timein_h[m+1];
    int timein_m[m+1];
    int timein_s[m+1];

    int timeout_h[m+1];
    int timeout_m[m+1];
    int timeout_s[m+1];

    for(int i=0;i<m;i++)
    {
        scanf("%s %d:%d:%d %d:%d:%d",number[i],
            &timein_h[i],&timein_m[i],&timein_s[i],
            &timeout_h[i],&timeout_m[i],&timeout_s[i]
        );
    }
    int indexin=0;
    int indexout=0;
    for(int i=1;i<m;i++)
    {
        if(timein_h[indexin]>timein_h[i])
            indexin=i;
        else if(timein_h[indexin]==timein_h[i])
        {
            if(timein_m[indexin]>timein_m[i])
                indexin=i;
            else if(timein_m[indexin]==timein_m[i])
            {
                if(timein_s[indexin]>timein_s[i])
                    indexin=i;
            }
            else 
            continue;
        }
        else 
            continue;
    }

    for(int i=1;i<m;i++)
    {
        if(timeout_h[indexout]<timeout_h[i])
            indexout=i;
        else if(timeout_h[indexout]==timeout_h[i])
        {
            if(timeout_m[indexout]<timeout_m[i])
                indexout=i;
            else if(timeout_m[indexout]==timeout_m[i])
            {
                if(timeout_s[indexout]<timeout_s[i])
                    indexout=i;
            }
            else 
            continue;
        }
        else 
            continue;
    }
    printf("%s\n",number[indexin]);
    printf("%s\n",number[indexout]);
    return 0;
}