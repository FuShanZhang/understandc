/*
	1.5元由1分，2分，5分组成，有多少种方法，结果为
*/
#include<stdio.h>
int main(void){
	int sumMoney;
	int o,t,f;
	int i = 0;
	for(o=0 ; o < 150; o++){
		for(t=0 ; t < 150 ; t+=2 ){
			for(f=0 ; f <150  ; f+=5){
				sumMoney = o + t + f;
				if(o!=0 && t!=0 && f!=0){
					if(sumMoney == 150 ){
						if(o+t/2+f/5 == 100){
							i++;
							printf("一块钱：%d,二块钱：%d,五块钱：%d,总钱数：%d,总次数为：%d\n",o,t/2,f/5,sumMoney,i);
						}
					}
				}
			}
		}
	}
}