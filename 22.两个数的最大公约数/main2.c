#include <stdio.h>

int main(void) {
    int a, b;
    int t;
    scanf("%d %d", &a, &b);
    while (b != 0)
    {
        t = a%b;
        a = b;
        b = t;
        printf("a = %d, b = %d, t = %d\n", a, b, t);
    }

    printf("最大公约数是%d\n", a);

    return 0;
}
