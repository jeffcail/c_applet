#include <stdio.h>

int main(void) {
    int number1, numerb2, sum;

    printf("请输入两个整数，以空格分割: ");

    scanf("%d %d", &number1, &numerb2);

    sum = number1 + numerb2;

    printf("%d + %d = %d\n", number1, numerb2, sum);

    return 0;
}
