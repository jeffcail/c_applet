#include <stdio.h>

int main(void) {
    int n, i, sum = 0;

    printf("输入一个整数: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        /* code */
        sum = sum + i;
    }
    printf("sum: %d\n", sum);
    
    return 0;
    
}
