/*转换2进制数*/
#include<stdio.h>
int main(void){
	int num;
	scanf("%d",&num);
	int count;

	for(int i= 1 ; i<num ; i++){
		num = num - (num>>(num-i));
		printf("%d\n",num>>(num-i));
		num = num - (num>>(num-i));
	}
	//printf("%d\n")
}