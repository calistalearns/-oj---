// # include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
    
//     for(int i=0;i<n;i++)
//     {
//        int count=i+1; 
//         do
//         {
//           printf("$");
//           count--;       
//         } while (count>0);
//        printf("\n"); 
//     }
//     return 0;
// }
//明明写的是对的嘛~~~~
#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j <= i; j++) 
        {
            printf("$");
        }
        printf("\n");
    }
    
    return 0;
}