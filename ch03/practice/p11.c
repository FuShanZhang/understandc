/*
	判断两个整数的差值是否小于10
*/
#include<stdio.h>
int main(void){
	int num1,num2;
	int dif;
	puts("请输入两个整数。")
	printf("整数A：");	scanf("%d",&num1);
	printf("整数B：");	scanf("%d",&num2);
	dif = num1 - num2;
	if(dif >= 10 || dif <= -10){
		puts("它们的差值大于等于10");
	}else{
		puts("它们的差值小于10");
	}
}