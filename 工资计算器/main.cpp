#include <stdio.h>

int main(void) {
    int gz; // 定义变量工资
    int sheBao; // 社保基数
    int gongJiJin; // 公积金基数

    printf("请输入您的税前工资");
    scanf("%d", &gz);

    printf("请输入您的社保基数: ");
    scanf("%d", &sheBao);

    printf("请输入您的公积金基数: ");
    scanf("%d", &gongJiJin);

    int kouKuan; // 要缴纳的五险一金
    kouKuan = sheBao * 0.08 + 
        sheBao * 0.02 + 
        sheBao * 0.05 + 
        gongJiJin * 0.12;

    // 计算要缴的税
    int shui;
    if (gz - kouKuan > 5000)
        shui = (gz - kouKuan - 5000) * 0.03;
    else 
        shui = 0;

    int shuiHouGz; // 税后工资
    shuiHouGz = gz - kouKuan - shui;
    printf("您的税后工资是: %d\n", shuiHouGz);

    return 0;
}
