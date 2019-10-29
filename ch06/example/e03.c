/*取元素的对角线的和,每一行每一列的和*/
#include<stdio.h>
int main(void){
	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
	int m = 0;
	int n = 0;
	int arr2[3] = {0};
	int arr3[3] = {0};

	for(int i = 0; i<3 ; i++){
		for(int j = 0 ;j<3 ; j++){
			if(i == j){
				m = m + arr[i][j];
			}
			if(2-i == j){
				n = n + arr[2-i][j];
			}
			arr2[i] = arr2[i]+arr[i][j];
			arr3[i] = arr3[i] +arr[j][i];
		} 
	}
	printf("%d,%d\n",m,n );
	for(int i = 0 ; i<3 ; i++){
		printf("%d\n", arr2[i]);

	}
	for(int i = 0 ; i<3 ; i++){
		printf("%d\n", arr3[i]);

	}
}