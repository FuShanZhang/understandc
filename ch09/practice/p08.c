/*编写程序实现字符串的逆向输出*/
#include<stdio.h>
#include<string.h>
void put_stringr(const char s[]){
	int length  = strlen(s);
	for(int i = length - 1 ; i>= 0 ; i--){
		printf("%c",s[i]);
	}
	printf("\n");
}

int main(void){
	char s[] = "ABC";
	put_stringr(s);
}