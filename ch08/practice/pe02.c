/*数组中移除一个数*/
#include<stdio.h>
void removeNum(int arr[], int num , int index2){
	for(int i = index2 ; i<num - 2 ; i++){
		arr[i] = arr[i+1];
	}
	arr[num - 1] = 0;
	for(int i = 0 ; i<num ; i++){
		printf("%d\n",arr[i]);
	}
}

int main(void){
	int arr[6] = {1,2,3,4,5,6};

	int	index;
	printf("请输入要移除数组的下标:");
	scanf("%d",&index);
	removeNum(arr,6,index);
}
