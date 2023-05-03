#include <stdio.h>
int addNumbers(int n);

int main(void) {
    int num;
    printf("输入一个整数: ");
    scanf("%d", &num);

    printf("sum = %d\n", addNumbers(num));

    return 0;
}

int addNumbers(int n) {
    if (n != 0) {
        return n + addNumbers(n-1);
    } else {
        return n;
    }
}
