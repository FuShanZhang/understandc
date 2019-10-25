/*
	判断相等运算符和关系运算符结果是1和0
*/
#include<stdio.h>
int main(void){
	int input1,input2;
	printf("请输入整数A:");		scanf("%d",&input1);
	printf("请输入整数B:");		scanf("%d",&input2);
	if((input1==input2) == 1){
		printf("相等为1为真\n");
	}else if ((input1==input2) == 0){
		printf("不相等为0为真\n");
	}
	if((input1 >= input2) == 1){
		printf("input1 >= input2为真结果为1为真\n");
	}else if((input1 >= input2) == 0){
		printf("input1 >= input2为假结果为0为假\n");	
	}
} 