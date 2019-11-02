/*编写函数，将字符串s中的数字字符全部删除*/
#include<stdio.h>
#include<string.h>
void del_digit(char s[]){
	int length = strlen(s);
	for(int i = 0 ; i<length ; i++){
		if(s[i]>='0' && s[i]<='9'){
			for(int j = i ; j<length ; j++){
				s[j] = s[j+1];
			}
			i--;
		}
	}
}
int main(void){
	char s[] = "ABC47665SAD";
	del_digit(s);
	printf("%s\n",s);
}