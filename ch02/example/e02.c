/*
	指定半径求圆的面积
	要求：小数点后两位
*/
#include<stdio.h>
#include<math.h>
#define PI 3.1415926 
int main(void){
	double r;
	double s;
	printf("请输入半径");		scanf("%lf",&r);
	s =	PI * pow(r,2);
	printf("%.2f\n",s );
}