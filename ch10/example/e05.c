/*字符串拼接*/
#include<stdio.h>
void concat(char *p1 , char *p2 , char *target){
	int i = 0;
	int j = 0;
	while(p1[i]){
		target[i] = p1[i]; 
		i++;
	}
	while(p2[j]){
		target[i] = p2[j];
		i++;
		j++;
	}
		
	
}

int main(void){
	char a[] = "abc";
	char b[] = "defg";
	char *p1 = a; 
	char *p2 = b;
	char target[10];
	char *p3 = target;

	concat(p1,p2,p3);

	printf("%s\n",target);
	
	
}