#include <stdio.h>

int main() {
    int n, m;
    
    while (scanf("%d %d", &n, &m) != EOF) {
        int max_friend = 0; // 小伙伴中的最高身价
        int price;
        
        // 读取n个小伙伴的身价，并找出最大值
        for (int i = 0; i < n; i++) {
            scanf("%d", &price);
            if (price > max_friend) {
                max_friend = price; // 更新最大值
            }
        }
        
        if (m > max_friend) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }
    
    return 0;
}