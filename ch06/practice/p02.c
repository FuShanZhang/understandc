/*创建函数，返回三个数中的最小值*/
#include<stdio.h>
int Compare(int a , int b , int c){
	if(a <= b && a<=c){
		return a;
	}else if(b<=a && b<=c){
		return b;
	}else{
		return c;
	}
}
int main(void){
	printf("%d\n",Compare(1,2,3));
}