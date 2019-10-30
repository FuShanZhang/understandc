/*创建一个函数,返回两个int型整数中较小的一个数的值*/
#include<stdio.h>
int Compare(int a , int b){
	if( a >=  b){
		return b;
	}else{
		return a;
	}
}

int main(void){
	printf("%d\n",Compare(1,2));
}