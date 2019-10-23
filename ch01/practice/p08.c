#include <stdio.h>
int main(void) {
    int num1;
    int num2;
    int result;
    puts("请输入两个整数。");
    printf("整数1:");	scanf("%d", &num1);
    printf("整数2:");	scanf("%d", &num2);
    result = num1 * num2;
    printf("它们的乘积是%d\n",result);
}