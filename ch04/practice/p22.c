/*
	画一个长方形
*/
#include<stdio.h>
int main(void){
	int row;
	int column;

	puts("让我们来画一个长方形。");
	printf("一边:");		scanf("%d",&row);
	printf("另一边");		scanf("%d",&column);

	for(int i=0; i<column;i++){
		for(int m=0 ;m<row; m++){
			printf("*");
		}
		printf("\n");
	}
}