/*逆向显示字符串s的字符*/
#include<stdio.h>
#include<string.h>
void rev_string(char s[]){
	int length = strlen(s);
	for(int i =0 ; i<length/2 ; i++){
		int temp = s[i];
		s[i] = s[length - 1 -i];
		s[length - 1 -i] = temp;
	}
}

int main(void){
	char s[] = "ABC";
	rev_string(s);
	printf("%s\n",s);
}