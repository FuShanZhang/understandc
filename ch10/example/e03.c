/*指针该参数为最大*/
#include<stdio.h>
void findMax(int *a,int *b){
	if(*a < *b){
		*a = *b;
	}
}
int main(void){
	int a = 2;
	int b = 3;
	findMax(&a,&b);
	printf("%d\n",a );
}