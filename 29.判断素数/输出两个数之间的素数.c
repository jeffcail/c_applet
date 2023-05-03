#include <stdio.h>

int main(void) {
    int low, high, i, flag;
    printf("输入两个整数: ");
    scanf("%d %d", &low, &high);

    printf("%d 与 %d 之间的素数为: ", low, high);

    while (low < high)
    {
        flag = 0;
        for (i = 2; i <= low/2; ++i)
        {
            if(low  % i == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) 
            printf("%d", low);
        ++low;
    }
    
    return 0;
}
