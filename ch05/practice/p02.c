/*
	依次把5、4、3、2、1赋值给数组的每一个元素并显示(使用for语句)
*/
#include<stdio.h>
int main(void){
	int i;
	int n = 5;
	int v[5];

	for(i = 0 ; i<5 ; i++){
		v[i] = n--;
	}
	for(i=0 ; i<5 ; i++){
		printf("v[%d] = %d\n",i,v[i] );
	}
}