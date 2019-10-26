/*
	该写程序,当输入的值小于1时不输出换行符
*/
#include<stdio.h>
int main(void){
	int no;
	int s;

	printf("正整数:");
	scanf("%d",&no);
	s = no;

	while(no-- > 0)
		putchar('*');
	if(s > 0){
		putchar('\n');
	}
	return 0;
}