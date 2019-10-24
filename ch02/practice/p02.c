#include <stdio.h>
int main(void){
	int a,b;
	int sum,product;
	puts("请输入两个数。");
	printf("整数a：");	scanf("%d",&a);
	printf("整数b：");	scanf("%d",&b);
	sum = a + b;
	product = a * b;
	printf("它们的和是%d,积是%d\n", sum,product);
}