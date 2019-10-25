#include<stdio.h>
int main(void){
	int num1,num2,num3,num4;
	printf("请输入四个整数,中间用,隔开");	
	scanf("%d,%d,%d,%d",&num1,&num2,&num3,&num4);
	if(num1 >= num2	&& num1	>= num3){
		printf("最大的数是%d\n",num1 >= num4 ? num1 : num4 );
	}else if(num2 >= num1 && num2 >= num3){
		printf("最大的数是%d\n",num2 >= num4 ? num2 : num4 );	
	}else if(num3 >= num1 && num3 >= num2){
		printf("最大的数是%d\n",num3 >= num4 ? num3 : num4 );	
	}
}