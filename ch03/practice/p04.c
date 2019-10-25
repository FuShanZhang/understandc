/*
	判断大小相等
*/
#include<stdio.h>
int main(void){
	int num1,num2;
	puts("请输入两个整数");
	printf("%s","整数A：" );	scanf("%d",&num1);
	printf("%s","整数B：" );	scanf("%d",&num2);

	if(num1 == num2){
		printf("%s\n","A等于B" );
	}else if(num1 > num2){
		printf("%s\n","A大于B" );
	}else{
		printf("%s\n","A小于B" );
	}
}