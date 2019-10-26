/*
	显示输入整数值以下的所有基数。	
*/
#include<stdio.h>
int main(void){
	int input;
	printf("整数值:");	scanf("%d",&input);
	for(int i=1 ; i<=input ; i+=2 ){
		printf("%d ",i);
	}
	printf("\n");
}