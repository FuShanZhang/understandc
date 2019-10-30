/*创建一个函数，连续发出几次响铃*/
#include<stdio.h>
void alert(int n){
	while(n-- > 0){
		printf("\a");
	}
}
int main(void){
	alert(3);
}