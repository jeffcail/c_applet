#include <stdio.h>

int main(void) {
    double number;

    printf("输入一个数字: ");
    scanf("%lf", &number);

    if (number <= 0.0) {
        if (number == 0.0) {
            printf("你输入的是0\n");
        } else {
            printf("你输入的是负数\n");
        }
    } else {
         printf("你输入的是整数\n");
    }
}
