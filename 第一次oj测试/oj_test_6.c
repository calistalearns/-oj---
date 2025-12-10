# include <stdio.h>
int main()
{
    int a,b;
    while (scanf("%d %d", &a, &b) != EOF) {
       double c = (double)a / b;
       printf("%.10f\n",c);

    }
    return 0;
}