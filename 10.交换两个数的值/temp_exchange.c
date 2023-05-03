#include <stdio.h>

int main(void) {
    double num1, num2, temp;

    printf("输入第一个数值: ");
    scanf("%lf", &num1);

    printf("输入第二个数值: ");
    scanf("%lf", &num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\n换后, num1的值为: %.2lf\n", num1);
    printf("\n换后, num2的值为: %.2lf\n", num2);

    return 0;

}
