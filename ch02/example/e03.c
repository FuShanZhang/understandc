/*
	判断俩数大小，输出较大的数。
*/

#include<stdio.h>
int main(void){
	int num1,num2;
	printf("请输入俩个整数,例如3,4:");
	scanf("%d,%d",&num1,&num2);

	if(num1 > num2){
		printf("%d\n",num1 );
	}else {
		printf("%d\n",num2 );
	}
}