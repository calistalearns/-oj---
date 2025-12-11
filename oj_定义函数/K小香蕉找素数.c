#include <stdio.h>
#include <string.h>

#define MAX_N 1000000

static int susu[MAX_N + 1];
static int primes[80000]; // 存储所有素数，1000000以内约78498个素数
static int prime_count = 0;

void found() 
{
    // 初始化标记数组
    memset(susu, 1, sizeof(susu));
    susu[0] = susu[1] = 0;
    
    // 埃氏筛法核心
    for (int i = 2; i * i <= MAX_N; i++) 
    {
        if (susu[i]) 
        {
            for (int j = i * i; j <= MAX_N; j += i) 
            {
                susu[j] = 0;
            }
        }
    }
    
    // 预处理所有素数到数组中
    for (int i = 2; i <= MAX_N; i++) 
    {
        if (susu[i]) 
        {
            primes[prime_count++] = i;
        }
    }
}

void ss(int x) 
{
    if (x <= 1) return;
    
    // 使用二分查找快速定位需要输出的素数范围
    int left = 0, right = prime_count - 1;
    int last_index = -1;
    
    // 二分查找最后一个≤x的素数的位置
    while (left <= right) 
    {
        int mid = left + (right - left) / 2;
        if (primes[mid] <= x) 
        {
            last_index = mid;
            left = mid + 1;
        } 
        else 
        {
            right = mid - 1;
        }
    }
    
    // 输出从2到x的所有素数
    for (int i = 0; i <= last_index; i++) 
    {
        printf("%d\n", primes[i]);
    }
}

int main() 
{
    int n;
    found(); // 程序开始时一次性预处理
    
    while (scanf("%d", &n) != EOF) 
    {
        ss(n);
    }
    return 0;
}