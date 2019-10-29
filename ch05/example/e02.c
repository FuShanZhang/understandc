/*
	数组长度为10，有6个元素分别是0000123456，接受0～9数字插入数组。
*/
#include<stdio.h>
#define SIZE 10
int main(void){
	int arr[10] = {0,0,0,0,1,2,3,4,5,6};
	int count;
	int num;
	int temp;

	do{

		printf("请输入0～9整数");	scanf("%d",&num);


		
		/*for(int i = 0 ; i< 9 ; i++){
			arr[i] = arr [i+1];
		}
			if(num>arr[8]){
				arr[SIZE - 1] = num;
			}*/
			if(arr[9]<=num){
				for(int i = 0 ;i<9 ; i++){
					arr[i] = arr[i+1];
				}
				arr[9] = num;
			}
			
			for(int i = 0; i<9;i++){
				if(arr[i]>=num){
					for(int j = 0; j<i-1 ; j++)
						arr[j] = arr[j+1];

					arr[i-1] = num;
						break;

				}
			}
		
		
		

		for(int i = 0 ; i< SIZE ; i++){
			printf("arr[%d] = %d\n",i,arr[i] );
		}
	}while(1 == 1);

}