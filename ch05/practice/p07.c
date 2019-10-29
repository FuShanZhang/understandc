#include<stdio.h>
#define NUMBER 10
int main(void){
	int num ;
	printf("数据个数:");	

	do{
		scanf("%d",&num);
		if(num<1 || num>NUMBER){
			printf("请输入1～%d的数:",NUMBER);
		}
	}while(num < 1 || num>NUMBER);

	int arr[num];

	for(int i = 1 ; i <= num ; i++){
		printf("%d号:",i);
		scanf("%d",&arr[i-1]);
	}
	printf("{");
	for(int i = 0 ; i<num ; i++){
		printf(" %d ",arr[i] );
	}
	printf("}");
	printf("\n");
}