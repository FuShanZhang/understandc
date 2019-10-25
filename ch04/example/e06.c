/*
	判断输出有多少空格，数字，字母和其他
*/
#include<stdio.h>
int main(void){
	int count = 0;
	int space = 0;
	int num = 0;
	int ver = 0;
	char c;
	do{
		c = getchar();
		count++;
		if((c>='A' && c<='Z')||(c>='a' && c<='z')){
			ver++;
		}else if(c>='0' && c<='9'){
			num++;
		}else if(c == ' '){
			space++;
		}
		printf("%d,%d,%d,%d\n",count,ver,num,space,count-ver-num-space );
	}while(c == '\n');
}