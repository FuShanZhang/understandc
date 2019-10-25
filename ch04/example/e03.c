/*
	输出1-5上课，6-7休息，其他输入不合法
*/
#include<stdio.h>
int main(void){
	int week;
	printf("请输入数字星期");	scanf("%d",&week);
	switch(week){
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		puts("上课");
		break;
		case 6:
		case 7:
		puts("休息");
		break;
		default:
		puts("输入数字不合法！请重新输入");
		break;
	}
}