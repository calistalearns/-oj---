#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// 函数：比较两个字符串表示的大整数的大小
// 返回：1 表示 a > b，0 表示 a == b，-1 表示 a < b
int compare(char* a, char* b) {
    int lenA = strlen(a);
    int lenB = strlen(b);
    if (lenA != lenB) {
        return (lenA > lenB) ? 1 : -1;
    }
    return strcmp(a, b);
}

// 函数：大整数减法 (a = a - b)
void subtract(char* a, char* b) {
    int lenA = strlen(a);
    int lenB = strlen(b);
    int borrow = 0;
    
    // 从个位（字符串末尾）开始相减
    int i = lenA - 1, j = lenB - 1;
    while (i >= 0) {
        int digitA = a[i] - '0';
        int digitB = (j >= 0) ? (b[j] - '0') : 0;
        
        int diff = digitA - digitB - borrow;
        if (diff < 0) {
            diff += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }
        a[i] = diff + '0'; // 结果存回a
        i--;
        j--;
    }
    
    // 去除结果前缀的0，例如 "0098" 变成 "98"
    int start = 0;
    while (a[start] == '0' && start < lenA - 1) {
        start++;
    }
    if (start > 0) {
        memmove(a, a + start, lenA - start + 1);
    }
}

// 函数：大整数除法
void bigIntegerDivide(char* dividend, char* divisor, char* quotient) {
    int lenDvd = strlen(dividend);
    int lenDvs = strlen(divisor);
    int qtIndex = 0; // 商的索引
    char current[1005] = ""; // 当前被除数部分
    
    // 特殊情况：如果被除数小于除数，商为0
    if (compare(dividend, divisor) < 0) {
        quotient[qtIndex++] = '0';
        quotient[qtIndex] = '\0';
        return;
    }
    
    for (int i = 0; i < lenDvd; i++) {
        int curLen = strlen(current);
        current[curLen] = dividend[i]; // 将被除数的下一位加入当前部分
        current[curLen + 1] = '\0';
        
        int count = 0; // 计算当前部分包含多少个除数
        while (compare(current, divisor) >= 0) {
            subtract(current, divisor);
            count++;
        }
        quotient[qtIndex++] = count + '0'; // 记录商的一位
    }
    
    quotient[qtIndex] = '\0';
    
    // 去除商的前导0，例如除数"123"除以被除数"123"，商可能是"01"，需要去掉前面的0
    int start = 0;
    while (quotient[start] == '0' && start < qtIndex - 1) {
        start++;
    }
    if (start > 0) {
        memmove(quotient, quotient + start, qtIndex - start + 1);
    }
}

int main() {
    int m;
    scanf("%d", &m);
    
    for (int i = 0; i < m; i++) {
        char dividend[1005], divisor[1005];
        scanf("%s %s", dividend, divisor);
        
        char quotient[1005]; // 存储商
        bigIntegerDivide(dividend, divisor, quotient);
        printf("%s\n", quotient);
    }
    
    return 0;
}