/*编写如下函数,将*y年*m月*d日的日期，修改为前一天或后一天的日期*/
#include<stdio.h>
void decrement_date(int *y , int *m , int *d){

}
void increment_date(int *y , int *m , int *d){

}

#include<stdio.h>
enum year{Ordinary,Leap};
int mdayInOrdinary[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
int mdayInLeap[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

void inOrdinary(int month , int day){
	int allYearDay = 0;
	for(int i = 0 ; i<month-1 ; i++){
		allYearDay = allYearDay + mdayInOrdinary[i];
	}
	printf("%d\n",allYearDay + day);
}

void inLeap(int month , int day){
	int allYearDay = 0;
	for(int i = 0 ; i<month-1 ; i++){
		allYearDay = allYearDay + mdayInLeap[i];
	}
	printf("%d\n",allYearDay + day);
}


enum year select(int year){

	if(year%4 == 0 && year%100 != 0){
		return Ordinary;
	}else if(year%400 == 0){
		return Ordinary;
	}else{
		return Leap;
	}
}

int main(void){


    enum year myyear;
    int year,month,day;
	printf("请输入年月日：");	scanf("%d,%d,%d",&year,&month,&day);

    switch (select(year)) {
    case Ordinary : inOrdinary(month,day); break;

    case Leap : inLeap(month,day); break;


    }
}