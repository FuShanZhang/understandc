/*
	打复杂菱形
*/
#include<stdio.h>
int main(void){
	int num;
	int space;
	scanf("%d",&num);
		space = (num + (num-1))/2;
	for(int i = 0; i < num; i++ ){
		for(int s = 0; s < space - i ; s++){
			printf(" ");
		}
		for(int m = 0 ; m <= i; m++){
			printf("* ");
		}
		printf("\n");
	}

	for(int i = 1; i < num; i++ ){
		for(int s = space; s < space  + i ; s++){
			printf(" ");
		}
		for(int m = i ; m < num; m++){
			printf("* ");
		}
		printf("\n");
	}
}