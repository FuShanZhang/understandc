/*该写代码9-12*/
#include<stdio.h>
#include<string.h>

#define NUMBER1 10
#define NUMBER2 128

void put_strary(char s[][NUMBER2] , int n){
	int i = 0;
	do{
		scanf("%s",s[i]);
		i++;
	}while((strcmp(s[i-1],"$$$$$")));
	
	for(int j=0 ; j<i - 1 ; j++){
		printf("s[%d] = \"%s\"\n",j,s[j]);
	}
}

int main(void){
	char cs[NUMBER1][NUMBER2];

	put_strary(cs,NUMBER1);
	return 0;
}