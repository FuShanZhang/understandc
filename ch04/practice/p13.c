/*
	求1～n的和，n的值从键盘输入。
*/
#include<stdio.h>
int main(void){
	int num;
	printf("n的值:");	scanf("%d",&num);
	printf("%d\n",(num+1)*num/2);
}