/*
	数组中插入数据
*/
#include<stdio.h>
#define LENGTH 10
void insertArr(int a[],int index,int element){
	/*if(index >= LENGTH - 2){

	}*/
	for(int i = LENGTH - 1  ; i>=index  ; i--){
		if(i >= index + 1){
			a[i] = a[i - 1];
		}
	}
	a[index] = element;
}
int main(void){
	int index,element;
	int a[LENGTH] = {0,1,2,3,4,5,6,7,8,9};
	printf("请输入插入点");	scanf("%d",&index);
	printf("请输入插入值大小");	scanf("%d",&element);

	insertArr(a,index,element);
	for(int i = 0 ; i<LENGTH ; i++){
		printf("%d\n",a[i]);
	}
}