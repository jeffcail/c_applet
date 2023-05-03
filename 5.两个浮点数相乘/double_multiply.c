#include <stdio.h>

int main(void) {
    double number1, numerb2, sum;

    printf("请输入两个浮点数，以空格分割: ");

    scanf("%lf %lf", &number1, &numerb2);

    sum = number1 * numerb2;

    printf("结果是: %.2lf\n", sum);

    return 0;
}
