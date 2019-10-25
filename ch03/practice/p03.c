/*
	显示绝对值
*/
#include<stdio.h>
int main(void){
	int input;
	printf("%s","请输入一个数：" );	scanf("%d",&input);
	if(input >= 0){
		printf("%s%d\n","绝对值是",input );
	}else{
		printf("%s%d\n","绝对值是",-input );
	}
}