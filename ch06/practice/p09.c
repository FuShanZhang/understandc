/*创建一个程序，对元素个数为n的int类型数组v进行倒序排序*/
#include<stdio.h>
void rev_intary(int v[] , int n){
	int temp = v[0];
	for(int i = 0 ; i<n ;i++){
		if(a[i]<a[i+1]){
			temp = a[i];
			a[i] = a[i+1];
			a[i+1] = temp;
		}
	}
}