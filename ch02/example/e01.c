#include <stdio.h>
int main(void){
	double dou1,dou2;
	double avg;
	scanf("%lf",&dou1);
	scanf("%lf",&dou2);
	avg = (dou1+dou2)/2;
	printf("%lf\n",avg );
}
/*
	      'double' [-Wformat]
        scanf("%lf",dou1);
               ~~~  ^~~~
e01.c:6:14: warning: format specifies type 'double *' but the argument has type
      'double' [-Wformat]
        scanf("%lf",dou2);
               ~~~  ^~~~
2 warnings generated.
	注：sanf函数不要后面参数不要忘记&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
*/