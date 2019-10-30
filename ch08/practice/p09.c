/*创建一个程序,计算标准输入流中出现的行数*/
#include<stdio.h>
int main(void){
	int ch;
	int count = 0;
	while((ch = getchar()) != EOF){
		if(ch == '\n'){

			count++;
		}
	}
	printf("%d\n",count);
}