#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int compare(char* a, char* b) {
    int lenA = strlen(a);
    int lenB = strlen(b);
    if (lenA != lenB) {
        return (lenA > lenB) ? 1 : -1;
    }
    return strcmp(a, b);
}


void subtract(char* a, char* b) {
    int lenA = strlen(a);
    int lenB = strlen(b);
    int borrow = 0;
    
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
        a[i] = diff + '0';
        i--;
        j--;
    }
    int start = 0;
    while (a[start] == '0' && start < lenA - 1) {
        start++;
    }
    if (start > 0) {
        memmove(a, a + start, lenA - start + 1);
    }
}

void bigIntegerDivide(char* dividend, char* divisor, char* quotient) {
    int lenDvd = strlen(dividend);
    int lenDvs = strlen(divisor);
    int qtIndex = 0; // 商的索引
    char current[1005] = ""; // 当前被除数部分
    if (compare(dividend, divisor) < 0) {
        quotient[qtIndex++] = '0';
        quotient[qtIndex] = '\0';
        return;
    }
    
    for (int i = 0; i < lenDvd; i++) {
        int curLen = strlen(current);
        current[curLen] = dividend[i];
        current[curLen + 1] = '\0';
        
        int count = 0; // 计算当前部分包含多少个除数
        while (compare(current, divisor) >= 0) {
            subtract(current, divisor);
            count++;
        }
        quotient[qtIndex++] = count + '0'; // 记录商的一位
    }
    
    quotient[qtIndex] = '\0';

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