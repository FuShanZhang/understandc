#include <stdio.h>
int main(void){
	int x;
	int y;
	int z;
	printf("整数x:");  scanf("%d",&x);
	printf("整数y:");	scanf("%d",&y);
	z = (x*100)/y;
	printf("x的值是y的%d%s\n",z,"%");
}