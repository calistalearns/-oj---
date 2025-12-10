#include <stdio.h>
#include <stdlib.h> 

int main() {
    int n, s, t; // 数量, 位置, 出口
    
    while (scanf("%d %d %d", &n, &s, &t) == 3) 
    {
        // 情况1：起点和终点相同，且不止一个碗（无法完成）
        if (s == t && n != 1) 
        {
            printf("-1\n");
        }
        // 情况2：起点和终点分别在两端（最优情况，无需超能力）
        else if ((s == 1 && t == n) || (s == n && t == 1)) 
        {
            printf("0\n");
        }
        // 情况3：需要1次超能力的情况
        else if ((s < t && t != n && s == 1) ||  // 从起点1向右走，终点不在最右
                 (s > t && t != 1 && s == n) ||  // 从起点n向左走，终点不在最左
                 (abs(s - t) == 1)) 
        {            // 起点和终点相邻
            printf("1\n");
        }
        // 情况4：其他情况需要2次超能力
        else 
        {
            printf("2\n");
        }
    }
    
    return 0;
}