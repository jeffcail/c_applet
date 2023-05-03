#include <stdio.h>

int main(void) {
    int a, b, c, max;
    printf("输入三个数 用空格分开: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a>b)
        max = a;
    else 
        max = b;
    
    if (max>c)
        printf("最大值为: %d\n", max);
    else 
        printf("最大值为: %d\n", c);

    return 0;
}
