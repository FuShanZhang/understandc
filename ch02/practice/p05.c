#include<stdio.h>
int main(void){
	int num1,num2;
	double precent;
	puts("请输入两个整数。");
	printf("整数a:");	scanf("%d",&num1);
	printf("整数b:");	scanf("%d",&num2);
	precent = num1 / num2 * 100;
	printf("a是b的%f%s\n", precent,"%");
}