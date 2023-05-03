#include <stdio.h>

int main(void) {
    int i, start, end, divisor;
    printf("please input a starting number: ");
    scanf("%d", &start);

    printf("please input a end number: ");
    scanf("%d", &end);

    printf("please input a integer as the divisor: ");
    scanf("%d", &divisor);

    for (i = start; i <= end; i++)
    {
        /* code */
        if (i % divisor ==0)
            printf("%d\n", i);
    }

   return 0; 
}
