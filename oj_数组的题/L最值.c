# include <stdio.h>
int main()
{
    int n;
    int arr[10]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   //
    int min_index = 0;
    for (int j = 1; j < n; j++) 
    {
        if (arr[j] < arr[min_index]) 
        {
            min_index = j;
        }
    }

    int temp = arr[0];
    arr[0] = arr[min_index];
    arr[min_index] = temp;

    int max_index = 0;
    for (int j = 1; j < n; j++) 
    {
        if (arr[j] > arr[max_index]) 
        {
            max_index = j;
        }
    }

    temp = arr[n - 1];
    arr[n - 1] = arr[max_index];
    arr[max_index] = temp;

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);                                             
    }
    return 0;
}