/*三行三列二维数组，输出最大最小值和下标，相同都输出*/
#include<stdio.h>
int main(void){
	int arr[3][3] = {{12,23,56},{67,45,76},{76,45,34}};
	int max,min;
	max = arr[0][0];
	min = arr[0][0];
	
	for(int i=0 ; i<3 ; i++){
		for(int j=0 ; j<3 ; j++){
			if(max<arr[i][j]){
				max = arr[i][j];
			}
			if(min > arr[i][j]){
				min = arr[i][j];
			}
		}
	}

	for(int i = 0 ; i<3 ; i++){
		for(int j=0 ; j<3 ; j++){
			if(arr[i][j] == max){
				printf("%d,%d,%d\n",i,j,max);
			}
			if(arr[i][j] == min){
				printf("%d,%d,%d\n",i,j,min);
			}
		}
	}


}







