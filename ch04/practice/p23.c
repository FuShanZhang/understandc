/*
	生成直角在左上方的和直角在右上方的两个三角形。
*/
#include<stdio.h>
int main(void){
/*
	左上方三角
*/
	int i,j,len;

/*	puts("生成直角在左上方的等腰直角三角形。");
	printf("短边:");
	scanf("%d",&len);

	for(i=1 ; i<=len ; i++){
		for(j=0 ; j<=len-i; j++)
			putchar('*');
		putchar('\n');
	}
	return 0;*/

	/*
		右上方三角
	*/
	puts("生成直角在右上方的等腰三角形。");
	printf("短边:");
	scanf("%d",&len);

	for(i = 1; i<=len ; i++){
		for(j=1 ; j<i ; j++)
			putchar(' ');
		for(j=0 ; j<=len - i ; j++)
			putchar('*');
		putchar('\n');
	}
	return 0;
}


























