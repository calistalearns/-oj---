# include <stdio.h>
# include <string.h>
int main()
{
    //先各找奇数偶数？在排序？再组合？？4个..
    //偶，大到小,后面
    //奇为偶下标，小到大，前头
    char str[100]={0};
    int i=0;
    fgets(str,sizeof(str),stdin);
    while(str[i]!='\0')
    {
        if(str[i]=='\n')
        {
            str[i]='\0';
            break;
        }
        i++;
    }
    int len=strlen(str);
    char stro[100]={0};
    char strj[100]={0};
    char ch[100]={0};
    int count1=0,count2=0;
    for(int j=0;j<len;j++)
    {
        if(j%2!=0)//偶
        {
            stro[count1]=str[j];
            count1++;
        }
        else
        {
            strj[count2]=str[j];
            count2++;
        }
    }
    stro[count1]='\0';
    strj[count2]='\0';
    //现在我打算排大小来了。。
    for(int a=0;a<count1-1;a++)
    {
        for(int b=0;b<count1-1-a;b++)
        {
            if(stro[b]<stro[b+1])
            {
                int temp=stro[b];
                stro[b]=stro[b+1];
                stro[b+1]=temp;
            }
        }
    }
    
    for(int a=0;a<count2-1;a++)
    {
        for(int b=0;b<count2-1-a;b++)
        {
            if(strj[b]>strj[b+1])
            {
                int temp=strj[b];
                strj[b]=strj[b+1];
                strj[b+1]=temp;
            }
        }
    }
    int count=0;
    for(int a=0;a<count2;a++)
    ch[count++]=strj[a];
    for(int a=0;a<count1;a++)
    ch[count++]=stro[a];
    ch[count]='\0';
    printf("%s\n",ch);
    return 0;
}