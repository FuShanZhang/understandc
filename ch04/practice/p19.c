#include<stdio.h>
int main(void){
	int input;
	int i = 1;
	int count = 0;
	printf("整数值:");	scanf("%d",&input);
	for(; i<=input; i++){
		if(input % i == 0){
			count++;
			printf("%d\n",i);
		}
	}
	printf("约数有%d个。\n",count);
}