#include <stdio.h>

/**
 * Armstrong 数，就是n位数的各位数的n次方之和等于该数
 * 153=1^3+5^3+3^3
 * 1634=1^4+6^4+3^4+4^4
*/

int main(void) {
    int number, originNumber, remainder, result = 0;

    printf("输入三位数: ");
    scanf("%d", &number);

    originNumber = number;

    while (originNumber != 0)
    {
        remainder = originNumber%10;
        result += remainder*remainder*remainder;
        originNumber /= 10;
    }

    if (result == number)
        printf("%d 是Armstrong数\n", number);
    else 
        printf("%d 不是 Armstrong数\n", number);

    return 0;
}
