/*
	从输入的整数开始倒数到0
*/
#include<stdio.h>

int main(void){
	int no;
	int s;

	printf("请输入一个正整数:");
	scanf("%d",&no);
	s = no;
	while(no > 0){
		printf("%d ",no--);
	}
	if(s >= 0){
		printf("\n");
	}
	return 0;
}