#include <stdio.h>
#define MAX_STRING_LENGTH 65535 // 定义最大字符串长度

int main() {
    char s[MAX_STRING_LENGTH];
    printf("请输入长度不小于 %d 的任意字符串: ", MAX_STRING_LENGTH);
    scanf("%s", s);
    for (int i = 0; i < s[i]; i++) {
        /* code */
        printf("%c的ASCII： %d\t", s[i], s[i]);
    }
    
    return 0;
}
