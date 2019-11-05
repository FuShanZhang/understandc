/*将字符串存储在数组中并显示*/
#include<stdio.h>

int main(void){
	char str[] = "ABC\0DEF";
	printf("字符串str为\"%s\"。\n",str);
}