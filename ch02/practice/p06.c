#include<stdio.h>
int main(){
	int height;
	double weight;
	printf("请输入您的身高");	scanf("%d",&height);
	weight = (height - 100) * 0.9;
	printf("您的标准体重是%.1f公斤。\n", weight);
}