#include<stdio.h>
int main(void){
	int num1,num2,num3;
	puts("请输入三个整数。");
	printf("整数A：");		scanf("%d",&num1);
	printf("整数B：");		scanf("%d",&num2);
	printf("整数C：");		scanf("%d",&num3);

	if(num1 == num2 && num2 == num3){
		puts("三个值都相等");
	}else if(num1 == num2 || num1 == num3){
		puts("两个值相等");
	}else if(num2 == num3){
		puts("两个值相等");
	}else{
		puts("都不相等");
	}
}