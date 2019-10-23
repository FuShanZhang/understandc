/*
	test:为int变量赋一个实数值的初始值（3.14）。
*/
# include <stdio.h>
int main(void){
	int s ;
	s = 3.14;
}
/*
	p04.c:7:6: warning: implicit conversion from 'double' to 'int' changes value
      from 3.14 to 3 [-Wliteral-conversion]
        s = 3.14;
          ~ ^~~~
1 warning generated.
*/