#include<stdio.h>
int main(void){
	int month;
	printf("%s\n","请输入月份" );		scanf("%d",&month);
	if(month>=3 && month <=5){
		printf("%s\n","春天" );
	}else if(month>5 && month<=8){
		printf("%s\n","夏天" );
	}else if(month>8 && month<=11){
		printf("%s\n","秋天" );
	}else if(month == 12 ){
		printf("%s\n","冬天" );
	}else if(month>0 && month<=2){
		printf("%s\n","冬天" );
	}else{
		printf("%s\n","您的输入不合法" );
	}
}