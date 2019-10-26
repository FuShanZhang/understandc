/*
	编写程序，读取一个正整数，显示位数。
*/
#include<stdio.h>
int main(void){
	int num;
	int count = 1;
	printf("请输入一个正整数:");	scanf("%d",&num);

	while(num >= 10){
		num /= 10;
		count++;
	}
	printf("%d\n",count);
}