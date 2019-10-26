/*
	显示身高和标准体重对照表，体重精确到小数点后俩位。
*/
#include<stdio.h>
int main(void){
	int height1;
	int height2;
	int blank;
	printf("开始数值(cm):");	scanf("%d",&height1);
	printf("结束数值(cm):");	scanf("%d",&height2);
	printf("间隔数值(cm):");	scanf("%d",&blank);

	for(;height1<=height2;height1+=blank){
		printf("%dcm	%.2fkg\n",height1,(height1-100)*0.9);
	}
}