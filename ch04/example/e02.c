/*
	判断正数，负数和0俩中写法
*/
#include<stdio.h>
int main(void){
	int num;
	printf("请输入一个整数");	scanf("%d",&num);
	if(num > 0){
		puts("正数");
	}else if(num < 0){
		puts("负数");
	}else{
		puts("0");
	}
}
