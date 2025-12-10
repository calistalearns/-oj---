# include <stdio.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    float arr[100]={0};

    for(int i=0;i<n;i++)
    {
        scanf("%f",&arr[i]);
    }
    float max=arr[0];
    float min=arr[0];
    for(int i=1;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("%.2f %.2f",max,min);
    return 0;
}