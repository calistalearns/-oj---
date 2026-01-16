# include <stdio.h>
int main()
{
    //输入一个华氏温度，输出摄氏温度
    double h;
    scanf("%lf",&h);
    double c=5*(h-32)/9;
    printf("%.2f",c);
    return 0;
}