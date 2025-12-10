# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    double arr[100]={0.0};
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&arr[i]);
    }
    double max=arr[0];
    double min=arr[0];
    for(int j=1;j<n;j++)
    {
        if(arr[j]>max)
        {
            max=arr[j];
        }
    }
    for(int j=1;j<n;j++)
    {
        if(arr[j]<min)
        {
            min=arr[j];
        }
    }
    printf("%.2f\n",max-min);
    return 0;
}