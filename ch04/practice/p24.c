/*
	显示金字塔
*/
#include<stdio.h>
int main(void){
	int num;
	puts("让我们来画个金字塔");
	printf("金字塔有几层:");	scanf("%d",&num);
	for(int i = 0 ; i < num ; i++){
		for(int s = 1 ; s < num - i ; s++){
			putchar(' ');
		}
		for(int n = -1 ; n <= (i - 1)*2+1 ; n++){
			putchar('*');
		}
		printf("\n");
	}
}