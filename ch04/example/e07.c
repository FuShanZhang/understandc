/*
	打棱形
*/
#include<stdio.h>
int main(void){
	int s;
	int count = 0;
	scanf("%d",&s);
	for(int m=s;m>0;m--){
		for(int space = 0 ; space< s-m; space++){
			printf(" ");
		}
		for(int n=s; n>0 ; n--){
			printf("%s","*");
		}
		printf("\n");
	}
}