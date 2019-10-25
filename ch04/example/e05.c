/*
	1,2,3,4组成多少个不同的两位数
*/
#include<stdint.h>
int main(void){
	int num1;
	int num2;
	int count = 0;
	for(num1 = 1; num1<=4 ; num1++){
		for(num2 = 1; num2<=4 ; num2++){
			if(num1 != num2){
			count++;
			printf("%d%d第%d次\n",num1,num2,count );
		}
		}
	}
}