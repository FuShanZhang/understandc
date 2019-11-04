/*
从键盘输入int,long,double型的值，将这些值作为xyz结构体的成员，
返回改结构体的值
*/
#include<stdio.h>

struct xyz{
	int x;
	long y;
	double z;
};

struct xyz xyz_of(int x,long y,double z){
	struct xyz temp;
	temp.x = x;
	temp.y = y;
	temp.z = z;
	return temp;
}

int main(void){
	struct xyz s ={0,0,0};
	xyz_of(scanf("%d",&s.x),scanf("%ld",&s.y),scanf("%lf",&s.z));

}