# include <stdio.h>
# include <math.h>
int susu(int t)
{
    int m=pow(10,t);
    if(m==2) return 1;
    else if(m<=1||m%2==0) return 0;
    else
    {
        for(int i=3;i*i<m;i+=2)
        {
            if(m%i==0)
            return 0;
        }
        return 1;
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int t;
        scanf("%d",&t);
        switch(t)
        {
            case 1

        }

    }
    return 0;
}