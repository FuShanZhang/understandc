/*
	修改代码：用while当输入的值为负数的时候不执行换行操作。
*/
#include<stdio.h>
int main(void){
	int no;
	int s;

	printf("请输入一个正整数:");
	scanf("%d",&no);

	s = no;

	while(no >= 0){
		printf("%d ",no);
		no--;
	}
	//printf("%d\n",no);
	if(s >= 0){
		printf("\n");
	}
	return 0;
}