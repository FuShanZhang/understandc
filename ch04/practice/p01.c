#include<stdio.h>
int main(void){
	int s;
	int no;
	int i = 0;
	do{

		i++;
		printf("请输入一个整数");
		scanf("%d",&no);

		if(no == 0){
			puts("该整数为0。");
		}else if(no > 0){
			puts("该整数为正数。");
		}else{
			puts("该整数为负数");
		}

		printf("输入1可以继续");		scanf("%d",&s);

	}while(s == 1);
	printf("谢谢使用");
}





















