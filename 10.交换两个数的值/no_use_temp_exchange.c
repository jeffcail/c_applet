#include <stdio.h>

int main(void) {
    int a, b;

    printf("输入第一个数值: ");
    scanf("%d", &a);

    printf("输入第一个数值: ");
    scanf("%d", &b);

    printf("交换之前 - \n a = %d, b = %d \n\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("交换之后 - \n a = %d, b = %d \n", a, b);


}
