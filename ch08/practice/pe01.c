/*定义一个数字字符的数组转换成数字*/
#include<stdio.h>
#include<math.h>

enum isDouble {Is,Not};

enum isDouble judge(char arr[],int num){
	for(int i=0 ; i<num ; i++){
		if(arr[i] == '.'){
			return Is;
			break;
		}
	}
	return Not;
}

void theDouble(char arr[],int num){
	int arr1[num];
	int count = -1;
	int rlt1 = 0;
	double rlt2 = 0.0;
	int z = 0;
	for(int i = 0 ; i<num ; i++){
		count++;
		if(arr[i] == '.'){
			break;
		}
	}
	for(int i=0 ; i<num ; i++){
		arr1[i] = arr[i] - '0';
	}
	for(int i = 0 ; i<count ; i++){
		rlt1 = rlt1 + arr1[i]*pow(10,count-i-1);
	}
	for(int i = count + 1 ; i<num ; i++){
		z--;
		rlt2 = rlt2 + arr1[i]*pow(10,z);
	}
	printf("%.2f\n",rlt1+rlt2 );
}

void theInt(char arr[] , int num){
	int arr1[num];
	for(int i=0 ; i<num ; i++){
		arr1[i] = arr[i] - '0';
	}
	int rlt = 0;
	for(int i = 0 ; i<num ; i++){
		rlt = rlt + arr1[i]*pow(10,num-i-1);
	}
	printf("%d\n",rlt);
}


int main(void){
	char arr[4] = {'2','1','.','1'};
	enum isDouble myDouble;


    switch (judge(arr,4)) {
	    case Is : theDouble(arr,4); break;

	    case Not : theInt(arr,4); break;


    }
	
}