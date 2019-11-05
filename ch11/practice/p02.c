/*计算求出数组字符串个数*/
#include<stdio.h>
#include<string.h>
int main(void){
	int i = 0;
	char a[][5] = {"LISP" , "C" , "Ada"};
	char *p[] = {"PAUL" , "X" , "MAC"};

	while(a[i] == NULL){
		i++;
	}

	printf("%d\n",i);
}