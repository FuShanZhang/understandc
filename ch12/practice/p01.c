/*
	用表示学生的结构体来显示高尾的信息
*/
#include<stdio.h>

#define NAME_LEN 64

struct student{
	char name[NAME_LEN];
	int height;
	float weight;
	long schols;
};

int main(void){
	struct student takao = {"Takao",173,86.2};

	printf("姓名 = %p\n",&takao.name);
	printf("身高 = %p\n",&takao.height);
	printf("体重 = %p\n",&takao.weight);
	printf("奖学金 = %p\n",&takao.schols);

	return 0;
}