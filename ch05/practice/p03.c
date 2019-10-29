/*。
	从头开始依次1对数组各元素进行初始化并显示用5、4、3、2、
*/
#include<stdio.h>
int main(void){
	int i;
	int v[5] = {5,4,3,2,1};

	for(i = 0 ; i<5 ; i++){
		printf("v[%d] = %d\n",i,v[i]);
	}
}