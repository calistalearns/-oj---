# include <stdio.h>
int main()
{
    int n[100]={0};
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&n[i]);
    }

    for(int i=0;i<N-1;i++)
    {
        for(int j=0; j=i-1-i;j++)
        {
            
            if(arr[j]>arr[j+1])
            {
                int b=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=b;
            }
            
        }
    }
    int j = 0;
    for (int i = 1; i < N; i++) 
    {
        if (arr[i] != arr[j]) 
        { 
            j++;
            arr[j] = arr[i]; 
        }
    }
    int u = j + 1;
    printf("%d\n", u);
    
    for(int i = 0; i < u; i++)
    {
        printf("%d", n[i]);
        if(i < u-1) printf(" "); 
    }
    printf("\n");
    return 0;
}