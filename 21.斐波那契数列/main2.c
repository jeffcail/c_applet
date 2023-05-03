#include <stdio.h>

/**
 * 输出指定数字前的斐波那契数列
*/

int main(void) {
    int t1 = 0, t2 = 1, nextTerm = 0, n;

    printf("输入一个整数: ");
    scanf("%d", &n);

    printf("斐波那契数列: %d, %d,", t1, t2);
    nextTerm = t1 + t2;

    while (nextTerm <= n)
    {
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    return 0;
}
