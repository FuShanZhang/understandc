#include<stdio.h>
int main(void){
	int input;
	int num1,num2;
	
	do{
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
		printf("%s","输入0退出，其他任意键继续" );
		scanf("%d",&input);
	}while(input != 0);
}