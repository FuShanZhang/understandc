/*
	显示输入值的次数。
*/
#include<stdio.h>
int main(void){
	int input;
	printf("n的值:");	scanf("%d",&input);
	for(int i= 1; i <= input ; i++){
		printf("%d的次方是%d\n",i,i*i);
	}
}