/*使用宏定义元素个数，对数组的元素进行倒叙排列*/
#include<stdio.h>
#define ELEMENT 3

int main(void){
	int i;
	int x[ELEMENT];

	for(i=0 ; i<ELEMENT ; i++){
		printf("x[%d]:",i );
		scanf("%d",&x[i]);
	}

	for(i=0 ; i<ELEMENT/2; i++){
		int temp = x[i];
		x[i] = x[ELEMENT - 1 - i];
		x[ELEMENT - 1  - i] = temp;
	}

	puts("倒叙排列了。");
	for(i = 0; i<ELEMENT; i++){
		printf("x[%d] = %d\n",i,x[i]);
	}
}