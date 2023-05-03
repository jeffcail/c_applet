#include <stdio.h>

/**
 * 判断一个数是否为回文数。
 * 设n是一任意自然数。若将n的各位数字反向排列所得自然数n1与n相等，则称n为一回文数。
 * 例如，若n=1234321，则称n为一回文数；但若n=1234567，则n不是回文数
*/

int main(void) {
    int n, reversedInteger = 0, remainder, originalInteger;

    printf("输入一个整数: ");
    scanf("%d", &n);

    originalInteger = n;

    // 反转
    while (n != 0)
    {
        remainder = n%10;
        reversedInteger = reversedInteger*10 + remainder;
        n /= 10;
    }

    // 判断
    if (originalInteger == reversedInteger)
        printf("%d 是回文数\n", originalInteger);
    else
        printf("%d 不是回文数\n", originalInteger);
    
    return 0;
}