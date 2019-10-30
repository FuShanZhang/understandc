/*计算标准输出流中出现的数字字符数*/
#include<stdio.h>

int main(void){
	int i,ch;
	int cnt[10] = {0};

	while((ch = getchar()) != EOF){
		if(ch>='0' && ch<='9'){
			cnt[ch - '0']++;
		}
	}
	puts("数字字符出现的次数");
}