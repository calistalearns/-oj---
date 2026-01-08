#include <stdio.h>

int main() {
    int n, m;
    while (scanf("%d%d", &n, &m) != EOF) {
        int t = 2 * n;
        char s[t + 1];
        int v[t]; // 状态标记
        int p[n]; // 淘汰位置记录
        int c = 0; // 当前位置
        int k = 0; // 淘汰计数
        
        // 初始化状态数组
        for (int i = 0; i < t; i++) {
            v[i] = 0;
        }
        
        // 模拟淘汰过程
        while (k < n) {
            int cnt = 0;
            while (cnt < m) {
                if (v[c] == 0) {
                    cnt++;
                    if (cnt == m) break;
                }
                c = (c + 1) % t;
            }
            v[c] = 1;
            p[k] = c;
            k++;
            
            // 寻找下一个起点
            int found = 0;
            for (int i = 1; i <= t && !found; i++) {
                int next = (c + i) % t;
                if (v[next] == 0) {
                    c = next;
                    found = 1;
                }
            }
        }
        
        // 构建结果
        for (int i = 0; i < t; i++) {
            s[i] = 'G';
        }
        for (int i = 0; i < n; i++) {
            s[p[i]] = 'B';
        }
        s[t] = '\0';
        
        printf("%s\n", s);
    }
    return 0;
}