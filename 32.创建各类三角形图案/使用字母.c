#include <stdio.h>

int main(void) {
    int i, j;
    char input, alphbet = 'A';

    printf("输入大写字母: ");
    scanf("%c", &input);

    for (i=1; i <= (input - 'A'+1); ++i) {
        for (j = 1; j <= i; ++j) {
            printf("%c", alphbet);
        }
        ++alphbet;
        printf("\n");
    }
    return 0;
}

