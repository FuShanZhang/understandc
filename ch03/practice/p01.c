#include<stdio.h>
int main(void){

	int num1,num2;

	puts("请输入两个整数。");
	printf("%s","整数A:");	scanf("%d",&num1);
	printf("%s","整数B:");	scanf("%d",&num2);

	if(num1%num2 == 0){
		printf("%s\n","B是A的约数"); 
	}else{
		printf("%s\n","B不是A的约数" );
	}

}