#include <stdio.h>

int main(void) {
    int num;
    printf("输入一个整数: ");
    while (scanf("%d", &num) == 1)
    {
        /* code */
        printf("sum = %d\n", (num + 1) * num / 2);
        break;
    }
    
    return 0;
}
