#include <stdint.h>
int main(void){
	printf("%s\n\n%s\n%s\n", "喂","您好！","再见。");
}
/*
	注：代码存在warning
	p03.c:3:2: warning: implicitly declaring library function 'printf' with type
      'int (const char *, ...)' [-Wimplicit-function-declaration]
        printf("%s\n\n%s\n%s\n", "喂","您好！","再见。");
        ^
*/