# include <stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int arr[1000];
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);       
    }
      int newNum; 
    scanf("%d", &newNum);
    
    arr[num] = newNum;

    int key = arr[num]; 
    int j = num - 1; 
    
    while (j >= 0 && arr[j] > key) {
        arr[j + 1] = arr[j]; // 大的数就往后挪
        j--; 
    }
    // 循环结束时，j+1 就是新数该放的位置
    arr[j + 1] = key;
    
    for(int i = 0; i < num + 1; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}