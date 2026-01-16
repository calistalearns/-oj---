#include <stdio.h>
#include <string.h>

int main() 
{
    char str[1000], s[100];
    int i = 0, j = 0;

    fgets(str, sizeof(str), stdin);
    fgets(s, sizeof(s), stdin);

    str[strcspn(str, "\n")] = '\0';
    s[strcspn(s, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) 
    {
        if (strchr(s, str[i]) == NULL) 
        {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';

    printf("%s", str);
    return 0;
}