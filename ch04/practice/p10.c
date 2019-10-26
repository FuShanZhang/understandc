/*
	显示*
*/
#include<stdio.h>
int main(void){
	int num;
	printf("正整数：");	scanf("%d",&num);
	while(num > 0){
		printf("%s\n","*");
		num--;
	}	
}