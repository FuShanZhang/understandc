/*
	显示九九乘法表，且显示横纵标题
*/
#include<stdio.h>
int main(void){
	int i,j;
	printf("    ");
	for(i=1;i<=9;i++){
		printf("%3d",i);
	}
	printf("\n");

	for(i=1;i<=9;i++){
		printf("---");
	}
	printf("----");
	printf("\n");

	for(i=1;i<=9;i++){
			printf("%3d",i);
			printf("|");
		for(j=1;j<=9;j++){
			printf("%3d",i*j);
		}
		putchar('\n');
	}
}