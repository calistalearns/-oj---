#include <stdio.h>
#include <string.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

float div(int a, int b)
{
    if (b == 0)
    {
        return 0;
    }
    else
    {
        return (float)a / b;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    
    char line[100];
    int a, b;
    char str[10];
    
    for (int i = 0; i < n; i++)
    {
        fgets(line, sizeof(line), stdin);
        
        int parsed = sscanf(line, "%9[^(](%d,%d)", str, &a, &b);
        
        if (parsed != 3)
        {
            continue;
        }
        
        if (strcmp(str, "add") == 0)
        {
            printf("%d\n", add(a, b));
        }
        else if (strcmp(str, "sub") == 0)
        {
            printf("%d\n", sub(a, b));
        }
        else if (strcmp(str, "mul") == 0)
        {
            printf("%d\n", mul(a, b));
        }
        else if (strcmp(str, "div") == 0)
        {
            if (b == 0)
            {
                printf("error\n");
            }
            else
            {
                float result = (float)a / b;
                int int_result = a / b;
                
                if (a % b == 0)
                {
                    printf("%d\n", int_result);
                }
                else
                {
                    printf("%.2f\n", result);
                }
            }
        }
    }
    
    return 0;
}