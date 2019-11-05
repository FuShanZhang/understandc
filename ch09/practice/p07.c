/*使字符串显示n次*/
#include<stdio.h>
void put_stringn(const char s[] , int n){
	for(int i = 0 ; i<n ; i++){
		printf("%s",s);
	}
	printf("\n");
}
int main(void){
	char s[] = "ABC";
	put_stringn(s,5);
}