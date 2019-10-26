/*
	数字倒金字塔
*/
#include<stdio.h>
int main(void){
	int input;
	int m,i;
	puts("让我们来画一个向下的金字塔。");
	printf("金字塔有几层:");	scanf("%d",&input);
	for(int m = 1 ; m <= input ; m++){
		for(int s = 1; s<m ; s++){
			putchar(' ');
		}
		for(int i = 0 ; i<(input - m)*2 + 1 ; i++){
			printf("%d",m%10);
		}
		printf("\n");
	}
}