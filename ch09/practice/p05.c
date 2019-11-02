/*编写函数，字符串s中含有c，则返回改元素的下标值，否则返回-1*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int str_char(const char s[] , char c){
	int length = strlen(s);
	for(int i = 0 ; i<length ; i++){
		if(c == s[i]){
			return i;
		}
	}
	return -1;
}

int main(void){
	char s[] = "ABC";
	char c = 'A';
	printf("%d\n",str_char(s,c));
}