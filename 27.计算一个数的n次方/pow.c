#include <stdio.h>
#include <math.h>

/**
 * 计算一个数的 n 次方，例如: 23，其中 2 为基数，3 为指数
*/
int main(void) {
    double base, exponent, result;

    printf("基数: ");
    scanf("%lf", &base);

    printf("指数: ");
    scanf("%lf", &exponent);

    // 计算结果
    result = pow(base, exponent);
    printf("%.1lf^%.1lf = %.2lf\n", base, exponent, result);

    return 0;
}
