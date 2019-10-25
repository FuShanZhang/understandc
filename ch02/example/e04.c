#include<stdio.h>
int main(void){
	int num1,num2;
	printf("请输入俩个整数：");	scanf("%d,%d",&num1,&num2);
	if(num1 > 0 && num2 > 0){
		if(num1 > num2){
			printf("较大的数是%d\n",num1 );
		}else{
			printf("较大的数是%d\n",num2 );
		}
	}else{
		printf("您的输入不合法，请重新执行输入\n");
	}
}