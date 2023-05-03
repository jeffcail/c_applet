#include <stdio.h>

/**
 * 通过最大公约数计算
*/
int main(void) {
    int n1, n2, i, gcd, lcm;
    printf("输入两个正整数: ");
    scanf("%d %d", &n1, &n2);

    for (i = 1; i <= n1 && i <= n2 ; ++i)
    {
        if (n1%i==0 && n2%i==0)
            gcd = i;
    }
    
    lcm = (n1*n2)/gcd;
    printf("%d 和 %d的最小公倍数 %d\n", n1, n2, lcm);

    return 0;
}


/**
 * while and if
*/
// int main(void) {
//     int n1, n2, minMultiple;
//     printf("输入两个正整数: ");
//     scanf("%d %d", &n1, &n2);

//     minMultiple = (n1>n2) ? n1 : n2;

//     while (1)
//     {
//         if (minMultiple%n1==0 && minMultiple%n2 == 0) {
//             printf("%d 和 %d 的最小公倍数为 %d\n", n1, n2, minMultiple);
//             break;
//         }
            
//         ++minMultiple;
//     }
    
//     return 0;
// }
