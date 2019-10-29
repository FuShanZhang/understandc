/*编写一段程序，求3行4列矩阵的乘积。各构成元素的值从键盘输入*/
#include<stdio.h>
int main(void){
	int arr1[4][3];
	int arr2[3][4];
	int arr3[4][4] = {0};

	puts("请输入4行3列矩阵的值");
	for(int i=0 ; i<4 ; i++){
		for(int j=0 ; j<3 ; j++){
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}

	puts("请输入3行4列矩阵的值");
	for(int i=0 ; i<3 ; i++){
		for(int j=0 ; j<4 ; j++){
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&arr2[i][j]);
		}
	}

	puts("结果为：");
	for(int i=0 ; i<4 ; i++){
		for(int j=0 ; j<4 ; j++){
			for(int k=0 ; k<3 ;k++){
				arr3[i][j] = arr3[i][j] + arr1[k][i]*arr2[j][k];
			}
			
			printf("arr3[%d][%d] = %d  ",i,j,arr3[i][j]);
			
		}
		printf("\n");
	}
}







