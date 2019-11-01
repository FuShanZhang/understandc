/*不知道写啥*/
#include<stdio.h>

void arr_set(int v[] , int n , int val){
	int i ;
	for(i=0 ; i<n ; i++){
		v[i] = val;
	}
}

int main(void){
	int i;
	int a[] = {1,2,3,4,5};

	ary_set(&a[2],2,99);

	for(i = 0 ; i<5 ; i++){
		printf("a[%d] = %d\n",i,a[i]);
	}

	return 0;
}
/*p05.c:15:2: warning: implicit declaration of function 'ary_set' is invalid in C99
      [-Wimplicit-function-declaration]
        ary_set(&a[2],2,99);
        ^
1 warning generated.
Undefined symbols for architecture x86_64:
  "_ary_set", referenced from:
      _main in p05-ef0e6d.o
ld: symbol(s) not found for architecture x86_64
clang: error: linker command failed */