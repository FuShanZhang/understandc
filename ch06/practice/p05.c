/*创建一个函数，返回1到n之间的所有值*/
#include<stdio.h>
int sumup(int n){
	int tmp = 0;
	for(int i = 1 ; i<=n ; i++){
		tmp += i;
	}
	return tmp;
}

int main(void){
	printf("%d\n",sumup(2));
}