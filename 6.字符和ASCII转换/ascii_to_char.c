#include <stdio.h>
#define MAX_ASCII 127

int main(void) {
    char num, enter;
    int temp=1;
    for(;temp>0;) {
        printf("----------------\n");
        printf("|**   开始    **|\n");
        printf("|** 转字符   按:1 **|\n");
        printf("|** 转ASCII 按:2 **|\n");
        printf("|** 结束 按:0 **｜\n");
        printf("----------------\n");

        scanf("%d", &temp);
        if (temp==1) {
            printf("请输入数值小鱼 %d 的任意字符: ", MAX_ASCII);
            scanf("%d", &num);
            printf("ASCII 为 %d,对应的字符为 %c \n", num, num);
        }

        if (temp==2) {
            printf("输入一个字符: \n");
            scanf("%c", &enter);
            scanf("%c", &num);
            printf("%c的 ASCII 为 %d \n", num, num);
        }
    }
    return 0;
}
