#include <stdio.h>

int power(int n1, int n2);

int main(void) {
    int base, exponent, result;

    printf("基数: ");
    scanf("%d", &base);

    printf("指数: ");
    scanf("%d", &exponent);
    result = power(base, exponent);
    printf("%d^%d = %d\n", base, exponent, result);

    return 0;
}

int power(int base, int exponent) {
    if (exponent != 0) 
        return (base*power(base, exponent-1));
    else 
        return 1;
}
