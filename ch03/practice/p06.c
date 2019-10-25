#include<stdio.h>
int main(void){
	int num1,num2,num3;
	printf("%s","请输入三个数，中间用英文逗号隔开" );		
	scanf("%d,%d,%d",&num1,&num2,&num3);
	if(num1 <= num2){
		if(num1 >= num3){
			printf("最小的数是：%d\n",num3);
		}else if(num1 < num3){
			printf("%s%d\n","最小的数是：",num1);
		}
	}else if(num1 > num2){
		if(num2 >= num3){
			printf("最小的数是：%d\n",num3);
		}else if(num2 < num3){
			printf("%s%d\n","最大的数是：",num2);
		}
	}
}