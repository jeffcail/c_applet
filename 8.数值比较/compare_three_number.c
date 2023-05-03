#include <stdio.h>

int main(void) {
    int a, b, c;

    printf("输入第一个值: ");
    scanf("%d", &a);

    printf("输入第二个值: ");
    scanf("%d", &b);

    printf("输入第三个值: ");
    scanf("%d", &c);

    if (a>b && a>c)
        printf("%d 最大\n", a);
    else if (b>a && b > c) 
         printf("%d 最大\n", b);
    else if (c>a && c>b)
         printf("%d 最大\n", c);
    else 
         printf("有相等的数值\n");

    return 0;
}
