#include <stdio.h>

int main(void) {
    int i, j, rows;
    
    printf("行数: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; ++i)
    {
        for (j = 1; j <= i; ++j)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
