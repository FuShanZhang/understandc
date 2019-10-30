/*创建一个函数，返回元素个数为n的int类型数组v中的最小值*/
#include<stdio.h>
int min_of(const int v[], int n){
	int temp = v[0];
	for(int i = 1 ; i<n ; i++){
		if(v[i]<temp){
			temp = v[i];
		}
	}
	return temp;
}
int main(void){
	int n[3] = {2,2,1};
	printf("%d\n",min_of(n,3));

}