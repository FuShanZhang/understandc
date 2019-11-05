/*返回字符串s中字符c的个数(没有则返回0)*/
#include<stdio.h>
#include<string.h>
int str_chnum(const char s[] , char c){
	int length = strlen(s);
	int count;
	for(int i =0 ; i<length ; i++){
		if(c == s[i]){
			count++;
		}
	}
	return count;
}
int main(void){
	char s[] = "ABAC";
	char c = 'A';
	printf("%d\n",str_chnum(s,c));
}