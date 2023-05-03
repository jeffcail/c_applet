#include <stdio.h>

int main(void) {
    char c;
    printf("输入一个字符: ");
    scanf("%c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("%c是字母\n", c);
    else 
        printf("%c不是字母\n", c);

    return 0;
}
