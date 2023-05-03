#include <stdio.h>
int hcf(int n1, int n2);

/**
 * 递归
*/
int main(void) {
    int n1, n2;
    printf("输入两个整数: ");
    scanf("%d %d", &n1, &n2);

    printf("%d 和 %d 的最大公约数为 %d\n", n1, n2, hcf(n1, n2));

    return 0;
}

int hcf(int n1, int n2) {
    if (n2 != 0)
        return hcf(n2, n1 % n2);
    else 
        return n1;
}


/**
 * 适用正数和负数
*/
// int main(void) {
//     int n1, n2;
//     printf("输入两个整数, 以空格分割: ");
//     scanf("%d %d", &n1, &n2);

//     // 如果输入的是负数，将其转换为正数
//     n1 = (n1 > 0) ? n1 : -n1;
//     n2 = (n2 > 0) ? n2 : -n2;

//     while (n1 != n2)
//     {
//         if (n1 > n2)
//             n1 -= n2;
//         else
//             n2 -= n1;
//     }
//     printf("gcd = %d\n", n1);

//     return 0;
// }


/**
 * while and if
*/
// int main(void) {
//     int n1, n2;

//     printf("输入两个整数, 以空格分割: ");
//     scanf("%d %d", &n1, &n2);

//     while (n1 != n2)
//     {
//         if(n1 > n2) 
//             n1 -= n2;
//         else
//             n2 -= n1;
//     }
//     printf("gcd = %d\n", n1);
//     return 0;
// }


/**
 * for and if
*/
// int main() {
//     int n1, n2, i, gcd;

//     printf("输入两个正整数, 以空格分割: ");
//     scanf("%d %d", &n1, &n2);

//     for (i = 1; i <= n1 && i <= n2; ++i)
//     {
//         /* code */
//         if (n1%i==0 && n2%i==0) 
//             gcd = i;
//     }
//     printf("%d 和 %d 的最大公约数是: %d\n", n1, n2, gcd);

//     return 0;
// }
