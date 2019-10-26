/*
	显示输入的整数的所有2的乘方。
*/
#include<stdio.h>
int main(void){
	int num;
	int p = 2;
	printf("请输入一个整数：");	scanf("%d",&num);
	while(p < num){
		printf("%d ",p);
		p = p * 2;
	}
}