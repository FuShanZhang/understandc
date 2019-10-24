#include <stdio.h>
int main(void){
	int num1,num2,num3;
	double dou1,dou2,dou3;

	num1 = 7 * 3.5;
	num2 = 7 / 3;

	dou1 = 7 * 3.5;
	dou2 = 7 / 3;

	printf("整数结果：%d,%d,浮点数结果：%f,%f\n",num1,num2,dou1,dou2);

	printf("请输入整数");		scanf("%d",&num3);

	printf("请输入浮点数");	scanf("%lf",&dou3);

	printf("整数与浮点数相乘结果为：%f,相除结果为：%f\n",num3*dou3,num3/dou3);
}