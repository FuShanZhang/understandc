/*
	花式打*
*/
#include<stdio.h>
int main(void){
	int input;
	printf("显示多少个*：");	scanf("%d",&input);

	for(int i = 1; i<=input ; i++){
		printf("%s","*");
		if(i%5 == 0){
			printf("\n");
		}
	}
	printf("\n");
}