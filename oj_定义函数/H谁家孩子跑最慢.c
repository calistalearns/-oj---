#include <stdio.h>

int main() 
{
    int sco[4][4]; 
    int i, j, k, who;
    
    // 前三名
    sco[1][1] = 7;  // 张3
    sco[2][1] = 8;  // 王2
    sco[3][1] = 9;  // 李1
    
    // 可能的组合
    for (i = 4; i < 6; i++)            // 张二4或5
    {          
        for (j = 4; j < 7; j++)        // 王二4~6
        {      
            for (k = 4; k < 7; k++)    // 李二4~6
            {  
                if (i != j && i != k && j != k && 
                    15 - i - 7 != 15 - j - 8 && 
                    15 - i - 7 != 15 - k - 9 && 
                    15 - j - 8 != 15 - k - 9) 
                {
                    // 分配
                    sco[1][2] = i; 
                    sco[1][3] = 15 - i - 7;  // 张3
                    sco[2][2] = j; 
                    sco[2][3] = 15 - j - 8;  // 王3
                    sco[3][2] = k; 
                    sco[3][3] = 15 - k - 9;  // 李3
                }
            }
        }
    }
    
    //最后一名
    who = 0;
    for (i = 1; i <= 3; i++) 
    {
        for (j = 1; j <= 3; j++) 
        {
            if (sco[i][j] == 1)  //找到
            {
                who = i;
            }
        }
    }
    
    if (who == 1) 
    {
        printf("Z\n"); 
    } 
    else if (who == 2) 
    {
        printf("W\n"); 
    } 
    else 
    {
        printf("L\n"); 
    }
    
    return 0;
}