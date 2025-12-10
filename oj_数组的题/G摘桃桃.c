# include <stdio.h>
int main()
{
    int n,m;
    int arr_1[2000]={0};
    int arr_2[2000]={0};
    int p[2000] = {0};
    scanf("%d %d",&n,&m);
    int count=m;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr_1[i]);
    }

    for(int j=0;j<m;j++)
    {
        scanf("%d",&arr_2[j]);
    }
    //
    for(int k = 0; k < n; k++) 
    {
        int s = -1; 
        
        for(int g = 0; g < m; g++) 
        {

            if (!p[g] && arr_2[g] > 0 && arr_2[g] < arr_1[k]) 
            {
             
                s= g;
                break;
            }
        }
        
        if (s != -1)
        {
            p[s] = 1;
            count--;         
        }
    }
    printf("%d",count);
    return 0;
}