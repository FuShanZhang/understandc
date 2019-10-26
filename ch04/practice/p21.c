/*
	搞出正方形
*/
#include<stdio.h>
int main(void){
	int input;
	printf("生成一个正方形\n");
	printf("正方形有几层:");	scanf("%d",&input);
	for(int i =1 ; i<=input ; i++){
		for(int m =1 ; m<=input ; m++){
			printf("*");
		}
		printf("\n");
	}
}