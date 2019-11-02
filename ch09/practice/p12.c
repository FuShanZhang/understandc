/*将接受的字符串数组中存储的n个字符串的字符逆向显示*/
#include<stdio.h>
void rev_string(char s[][128] , int n){
	for(int i = 0 ;i<n ; i++){
		scanf("%s",s[i][128]);
	}
	for(int i = n - 1; n>=0 ; n-- ){
		printf("%s\n"s[n][128]);
	}
}

int main(void){
	
}