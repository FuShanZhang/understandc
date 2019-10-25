/*
	将if语句替换为switch
*/
#include<stdio.h>
int main(){

	int no;
	int res;

	printf("请输入一个整数:");
	scanf("%d",&no);

	res = no % 2;

	switch(res){
		case 0:
		puts("该整数是偶数。");
		break;
		
		default:
		puts("该整数是奇数。");
		break;
	}
}