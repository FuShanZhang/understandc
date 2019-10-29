/*
	12345,显示54321。
*/
#include<stdio.h>
#define ELEMENT 5
int main(void){
	int temp;
	int arr[ELEMENT] = {1,2,3,4,5};

	for(int i = 0 ; i<=ELEMENT/2; i++){
		temp = arr[i];
		arr[i] = arr[ELEMENT - i-1];
		arr[ELEMENT - i-1] = temp;
	}
	for(int i = 0 ; i<ELEMENT ; i++)
	printf("arr[%d] = %d\n",i,arr[i] );
}