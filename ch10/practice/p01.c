/*编写函数adjust_point,如果n指向小于0，就改0，如果值大于100，就改为100*/
#include<stdio.h>
void adjust_point(int *n){
	if(*n < 0){
		*n = 0;
	}else if(*n > 100){
		*n = 100;
	}
}

int main(void){
	int input;
	scanf("%d",&input);
	adjust_point(&input);
	printf("%d\n",input );
}