#include <stdio.h>

int main(void) {

    int number;

    printf("输入一个整数: ");
    scanf("%d", &number);

    if (number % 2 == 0)
        printf("%d 是偶数\n", number);
    else
        printf("%d 是奇数\n", number);
    
    return 0;
}
