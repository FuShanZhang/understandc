/*创建一个程序，对元素个数为n的int类型数组v进行倒序排序*/
#include<stdio.h>
void rev_intary(int v[] , int n){
	int temp = v[0];
	for(int i = 0 ; i<n ;i++){
	    for(int j = 1+i ; j<n ; j++){
            if(v[i]<v[j]){
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
	    }
	}
	for(int i = 0 ; i<n ;i++){
	    printf("%d",v[i]);
	}
	printf("\n");
}
int main(void){
    int v[] = {2,3,5,7,3};
    rev_intary(v,5);
}