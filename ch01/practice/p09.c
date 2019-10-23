#include <stdio.h>
int main(void){
	int num1,num2,num3;
	int sum;
	puts("请输入三个整数");
	printf("整数1：");	scanf("%d",&num1);
	printf("整数2：");	scanf("%d",&num2);
	printf("整数3：");	scanf("%d",&num3);
	sum = num1 + num2 + num3;
	printf("它们的和是%d\n",sum );
}
