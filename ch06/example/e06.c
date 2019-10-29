/*抽签程序*/
/*随机生成数*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int myrand(int min, int max) {
    
    return rand()%(max - min + 1)+min;

}
int main(void) {
	srand((unsigned)time(NULL));
    printf("%d\n",myrand(1,100));
    return 0;
}