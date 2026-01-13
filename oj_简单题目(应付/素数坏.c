# include <stdio.h>
# include <stdbool.h>
# include <string.h>

int susu(int n)
{
    if(n==2)return 1;
    else if(n%2==0||n<=1)return 0;
    else{
        for(int i=3;i*i<=n;i+=2)
        {
            if(n%i==0)return 0;
        }
        return 1;
    }
}

void c(int arr[],bool used[],int n,int pos)
{
    if(pos==n)
    {
        if(susu(arr[0]+arr[n-1]))
        {
            for(int i=0;i<n;i++)
            {
                printf("%d ",arr[i]);
            }
            printf("\n");
        }
        return ;
    }
    

    for(int i=2;i<=n;i++)
    {
        if(!used[i]&&susu(arr[pos-1]+i))
        {
            used[i]=1;
            arr[pos]=i;
            c(arr,used,n,pos+1);
            used[i]=0;
        }
        
    }
    
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    bool used[n+1];
    memset(used,false,sizeof(used));
    arr[0]=1;
    used[1]=1;
    //
   c(arr,used,n,1);

    return 0;
}