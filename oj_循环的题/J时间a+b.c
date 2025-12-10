# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int ah,am,as,bh,bm,bs;
        scanf("%d%d%d%d%d%d",&ah,&am,&as,&bh,&bm,&bs);
        int cs=as+bs;
        int cm=am+bm;
        int ch=ah+bh;
        if(cs>=60)
        {
            cs=cs-60;
            cm=cm+1;
        }
        if(cm>=60)
        {
            cm=cm-60;
            ch=ch+1;
        }
        printf("%d %d %d\n",ch,cm,cs);
    }
    return 0;
}