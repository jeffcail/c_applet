#include <stdio.h>

int main(void) {
    for (int i = 0; i <= 10; i++)
    {
        /* code */
        i & 1 ? printf("奇数: %d\n", i) : printf("偶数: %d\n", i);
    }

    return 0;
}
