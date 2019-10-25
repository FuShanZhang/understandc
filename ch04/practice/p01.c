#include<stdio.h>
int main(void){
	char s;
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

		printf("输入.可显示循环次数");		scanf("%s",&s);

		if(s == '.'){
			printf("%d\n",i );
		}

	}while(1 == 1);
}