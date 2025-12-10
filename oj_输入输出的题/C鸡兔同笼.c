# include <stdio.h>
int main()
{
    //有若干只鸡兔同在一个笼子里，从上面数，有35个头；从下面数，有94只脚。求笼中各有几只鸡和兔？
    //现有n个头和m个脚，要你写一个程序计算到底有多少只鸡和兔。
    int n=0,m=0;
    scanf("%d %d", &n, &m);
    int b = (m - 2 * n) / 2;
    int a = n - b;
    printf("%d %d",a,b);
    return 0;
}