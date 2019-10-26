/*
	输入交替显示的+和——
*/
#include<stdio.h>
int main(void){
	int input;
	int num = 1;
	int s;
	printf("正整数:");	scanf("%d",&input);
	s = input;
	while(num <= input){
		if(num % 2 != 0){
			putchar('+');
		}else{
			putchar('-');
		}
		num++;
	}
	if(s > 0){
		printf("\n");
	}
}