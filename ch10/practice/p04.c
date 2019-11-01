/*为所有元素赋上上下标*/
#include<stdio.h>
#define LENGTH 5
void set_idx(int *v , int n){
	for(int i =0 ; i<n ; i++){
		v[i] = i;
	}
}

int main(void){
	int a[LENGTH];

	int *v = a;

	set_idx(v,LENGTH);

	for(int i = 0 ; i<LENGTH ; i++){
		printf("%d\n",a[i]);
	}
}