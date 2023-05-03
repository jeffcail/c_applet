#include <stdio.h>

/**
 * 奇偶数判断其实有个更简单高效的办法
 * 我们的整数，在计算机中存储的都是二进制
 * 奇数的最后一位必是1
*/
int main(void) {
    int number;

    printf("输入一个整数: ");
    scanf("%d", &number);

    if (number&1)
        printf("%d 是奇数\n", number);
    else 
        printf("%d 是偶数\n", number);
    
    return 0;
}
