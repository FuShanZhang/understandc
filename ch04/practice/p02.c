#include<stdio.h>
int main(void){
	int num1,num2;
	int s = 0;

	puts("请输入两个整数。");
	printf("整数a:");	scanf("%d",&num1);
	printf("整数b:");	scanf("%d",&num2);

	do{
		s = s + num2;
		num2++;
		if(num2 - 1  == num1){
			printf("%d\n",s );
		}
	}while( num2 - 1  != num1);
}