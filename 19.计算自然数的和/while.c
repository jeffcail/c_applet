#include <stdio.h>

int main(void) {

    int n, i = 1, sum = 0;

    printf("输入一个整数: ");
    scanf("%d", &n);

    while (i<=n)
    {
        /* code */
        sum += i;
        i++;
    }

    printf("sum: %d\n", sum);
    
    return 0;
}
