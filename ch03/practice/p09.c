/*
	替换if语句为三目运算符
*/
#include<stdio.h>
int main(){
	int n1,n2;

	puts("请输入两个整数。");
	printf("整数1:");	scanf("%d",&n1);
	printf("整数2:");	scanf("%d",&n2);

	printf("%s\n",n1==n2 ? "它们相等":"它们不相等");
}