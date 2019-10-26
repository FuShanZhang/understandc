/*
	循环显示123456789和整数数字值相同。
*/
#include<stdio.h>
int main(void){
	int input;
	int num = 1;
	printf("请输入一个正整数:");	scanf("%d",&input);
	for( ; input >0 ; input--){
		int s = num%10;
		printf("%d",s);
		num++;	
	}
	printf("\n");
}