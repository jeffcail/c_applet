#include <stdio.h>

int main(void) {

    int year;
    printf("输入年份: ");
    scanf("%d", &year);

    if (year%4 == 0) {
        if (year%100 == 0) {
            if (year%400 == 0){
                printf("%d 是闰年\n", year);
            } else {
                printf("%d 不是闰年\n", year);
            }
        } else { 
            printf("%d 是闰年\n", year);
        }
    } else { 
        printf("%d 不是闰年\n", year);
    }
    return 0;
}
