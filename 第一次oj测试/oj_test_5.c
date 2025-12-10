#include <stdio.h>
#include <string.h> 

int main() {
    char str[1000];   
    fgets(str, sizeof(str), stdin);
    //🤡🤡🤡🤡😫
    int len = strlen(str); // 字符串长度
    
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n"); //换行  
    return 0;
}