/*
	1、键盘输入	2、按照身高进行生序排列，或者按照姓名的顺序排列
*/
#include<stdio.h>
#include<string.h>

#define NUMBER 5
#define NAME_LEN 64

typedef struct{
	char name[NAME_LEN];
	int height;
	float weight;
	long schols;
}Student;

void swap_Student(Student *x , Student *y){
	Student temp = *x;
	*x = *y;
	*y = temp;
}

void sort_by_height(Student a[] , int n){
	int i,j;

	for(i = 0 ; i<n-1 ; i++){
		for(j = n-1 ; j>i ; j++){
			if(a[j-1].height > a[j].height){
				swap_Student(&a[j-1],&a[j]);
			}
		}
	}
}

void sort_by_name(Student a[] , int n){
	for(int i = 0 ; i<n-1 ; i++){
		for(int j = n-1 ; j>i ; j++){
			if(a[j-1].name[k] > a[j].name[k]){
				swap_Student(&a[j-1],&a[j]);
			}else if(a[j-1].name[k] = a[j].name[k]){
				k = k+1;
				sort_by_name(std,n)
			}
		}
	}

}




int main(void){
	int i = 0;
	int limit = NUMBER;
	Student std[NUMBER];
	while(limit--){
		scanf("%s",std[i].name);
		scanf("%d",&std[i].height);
		scanf("%f",&std[i].weight);
		scanf("%ld",&std[i].schols);
	}

	for(i = 0 ; i<NUMBER ; i++){
		printf()
	}
}













