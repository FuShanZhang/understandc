/*使用sqr函数创建另一个函数，返回int类型整数的四次幂*/
#include<stdio.h>
int sqr(int x){
	return x*x;
}

int pow4(int x){
	return sqr(x)*sqr(x);
}

int main(void){
	printf("%d\n",pow4(2));
}