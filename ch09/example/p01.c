/*单个字符变大小写*/
#include<stdio.h>
char mytoupper(char a){
	if(a>='a' && a<='z'){
		return a-('a'-'A');
		
	}else{
		return a;
	}
}

char mytolower(char a){
	if(a>='a' && a<='z'){
		return a;
	}else{
		return a+('a'-'A');
	}
}
int main(void){
	char a = 'a';
	char b = 'A';
	printf("%c\n",mytoupper(a) );
	printf("%c\n", mytolower(b));
	char c[] = {"AbC"};
	int i = 0;
	while(c[i]){
		c[i] = mytoupper(c[i]);
		i++;
	}
	printf("%s\n",c);
}