#include <stdio.h>

int main(void) {
    long long n;
    int count = 0;

    printf("输入一个整数: ");
    scanf("%lld", &n);

    while (n != 0)
    {
        n /= 10;
        ++count;
    }
    printf("数字是 %d 位数\n", count);

    return 0;
}
