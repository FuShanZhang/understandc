/*将接受的字符串数组中存储的n个字符串的字符逆向显示*/
#include<stdio.h>
#include<string.h>

void rev_string(char s[][128] , int n){
	for(int i = 0 ;i<n ; i++){
		scanf("%s",s[i]);
	}

	for(int i = 0 ; i<n ; i++){
		int length = strlen(s[i]);
		for(int j = length ; j>=0 ; j--){
			printf("%c",s[i][j]);
		}
		printf("\n");
	}
}

int main(void){
	char s[2][128];
	rev_string(s,2);
}