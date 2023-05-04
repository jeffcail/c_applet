#include <stdio.h>

int main(void) {
    int i, j, rows;

    printf("行数: ");
    scanf("%d", &rows);

    for(i = rows; i >= 1; --i) {
        for (j = 1; j <= i; ++j) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}