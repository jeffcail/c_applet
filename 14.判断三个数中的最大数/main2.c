#include <stdio.h>

int main(void) {
    int a, b, c, max;
    printf("输入三个数,用空格分开: ");
    scanf("%d %d %d", &a, &b, &c);

    max = a > b ? (a > c ? a : c) : (b > c ? b : c);
    printf("最大值 : %d\n", max);

    return 0;
}
