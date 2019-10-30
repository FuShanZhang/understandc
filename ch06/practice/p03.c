/*创建一个函数，返回int类型的立方*/
#include<stdio.h>
int cube(int a){
	return a*a*a;
}

int main(void){
	printf("%d\n",cube(2));
}