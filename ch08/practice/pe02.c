/*数组中移除一个数*/
#include<stdio.h>
<<<<<<< HEAD
void removeNum(int arr[], int num , int index2){
	for(int i = index2 ; i<num - 2 ; i++){
		arr[i] = arr[i+1];
	}
	arr[num - 1] = 0;
	for(int i = 0 ; i<num ; i++){
		printf("%d\n",arr[i]);
	}
=======

void removeNum1(int arr[], int num , int index2){
    for(int i = index2 ; i<num - 2 ; i++){
        arr[i] = arr[i+1];
    }
    arr[num - 1] = 0;
    for(int i = 0 ; i<num ; i++){
        printf("%d\n",arr[i]);
    }
>>>>>>> 69f418c6464c65eec916aea861ab82f2f0f52ef4
}

int main(void){
	int arr[6] = {1,2,3,4,5,6};

	int	index;
	printf("请输入要移除数组的下标:");
	scanf("%d",&index);
<<<<<<< HEAD
	removeNum(arr,6,index);
=======
	removeNum1(arr,6,index);

	
>>>>>>> 69f418c6464c65eec916aea861ab82f2f0f52ef4
}
