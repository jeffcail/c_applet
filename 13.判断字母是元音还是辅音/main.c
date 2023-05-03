#include <stdio.h>

/*
* 英语有26个字母
* 元音只包括 a、e、i、o、u 这五个字母，其余的都为辅音
* y是半元音、半辅音字母，但在英语中都把他当作辅音
*/

int main(void) {
    char c;
    int isLower, isUpper;

    printf("输入一个字母: ");
    scanf("%c", &c);

    isLower = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    isUpper = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (isLower || isUpper)
        printf("%c 是元音\n", c);
    else 
        printf("%c 是辅音\n", c);

    return 0;
}
