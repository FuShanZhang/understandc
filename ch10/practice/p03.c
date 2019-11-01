/*编写如下*/
#include<stdio.h>
void sort3(int *n1 , int *n2 , int *n3){
	int a[] = {*n1,*n2,*n3};
	int temp;
	for(int i = 0 ; i<2 ; i++){
		if(a[i] < a[i+1]){
			temp = a[i];
			a[i] = a[i+1];
			a[i+1] = temp;
		}
	}
	if(a[0]<a[1]){
		temp = a[0];
		a[0] = a[1];
		a[1] = temp;
	}
	for(int i = 0 ; i<3 ; i++){
		printf("%d\n",a[i]);
	}
}
int main(void){
	int a,b,c;
	scanf("%d,%d,%d",&a,&b,&c);
	int *n1 = &a;
	int *n2 = &b;
	int *n3 = &c;
	sort3(n1,n2,n3);
	//printf("%d,%d,%d\n",*n1,*n2,*n3);
}