#include<stdio.h>
int main(void){
	int input;
	int even = 2;

	printf("请输入一个整数:");		scanf("%d",&input);

	while(even < input){
		if(even % 2 == 0){
			printf("%d ",even);
		}
		even++;
	}
	printf("\n");
}