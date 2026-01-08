# include <stdio.h>
# include <string.h>

int v(char *ip)
{
    int a,b,c,d;
    char e;
    int ipp=sscanf(ip,"%d.%d.%d.%d%c",&a,&b,&c,&d,&e);
    if(ipp!=4)return 0;
    if
        (a>= 0 && a<= 255 &&
        b >= 0 &&b <= 255 &&
        c>= 0 && c <= 255 &&
        d>= 0 && d <= 255) 
        return 1;

    return 0;
}
int main()
{
    char ip[1000];
    scanf("%s",ip);
    if(v(ip))
    printf("YES\n");
    else
    printf("NO\n");
    return 0;
}