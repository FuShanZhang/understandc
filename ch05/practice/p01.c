/*
	依次把0、1、2、3、4赋值给数组的每个元素并显示（使用for语句）
*/
#include<stdio.h>
int main(void){

	int i;
	int v[5];

	for(i = 0 ; i<5 ; i++){
		v[i] = i ;
	}
	for(i = 0 ; i<5 ; i++){
		printf("v[%d] = %d\n", i , v[i]);
	}
	return 0;
}