/*改写程序*/
#include<stdio.h>
int main(void){
	char *p = "123";
	printf("p=\"%s\"\n",p);
	p = "465"+1;
	printf("p=\"%s\"\n",p );
	return 0;
}