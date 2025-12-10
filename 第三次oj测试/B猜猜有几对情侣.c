#include <stdio.h>
#include <string.h>

int main()
{
    char arr[100000];
    scanf("%s", arr);
    int len = strlen(arr);
    
    int count0 = 0, count1 = 0;

    for(int i = 0; i < len; i++) 
    {
        if(arr[i] == '0') 
        count0++;
        else 
        count1++;
    }
    
    int p= (count0 < count1) ? count0 : count1;
    
    printf("%d", p);
    return 0;
}