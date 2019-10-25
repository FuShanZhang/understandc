/*
	根据数字月份判断春夏秋冬。
*/

#include<stdio.h>
int main(void){
	int input;
	printf("%s\n","请输入月份" );	scanf("%d",&input);
	switch(input){
	case 3:
	case 4:
	case 5:
		printf("%s\n","春天");
		break;

	case 6:
	case 7:
	case 8:
		printf("%s\n", "夏天");
		break;

	case 9:
	case 10:
	case 11:
		printf("%s\n","秋天" );
		break;

	case 12:
	case 1:
	case 2:
		printf("%s\n","冬天" );
		break;

	default:
		printf("%s\n","您输入的数字不合法" );
		break;
	}
}