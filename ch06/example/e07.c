/*新猜数*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main(void){

	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
	int arr2[4];
	srand((unsigned)time(NULL));
	for(int i =0  ;i<4 ;i++){
		int temp;
		int index = rand()%(10-i);

		temp = arr[9 - i];
		arr[9-i] = arr[index];
		arr[index] = temp; 
		arr2[i] = arr[9-i];
	}
	//printf("%d,%d,%d,%d\n",arr[6],arr[7],arr[8],arr[9]);


	int rlt = arr2[0]*1000 + arr2[1]*100 + arr2[2]*10 + arr2[3];
	printf("-----正确答案%d\n",rlt);
	int num;
	
	
	do{
		do{
			puts("请输入四个数字");	scanf("%d",&num);
		}while((num<0 || num>10000) || (num/1000%10 == num/100%10 || num/1000%10 == num/10%10 || num/1000%10 == num%10 || num/100%10 == num/10%10 || num/100%10 == num%10 || num/10%10 ==num%10));

		int	count = 0;
		int count2 = 0;
		for(int i = 0 ; i<4 ; i++){
			for(int j =0 ;j<=3 ;j++){
				if(arr2[i] == (num/(int)pow(10,j))%10)
					count++;
					//printf("%d,%d\n",num%(int)pow(10,j),count);
				 	//count++;
			}
		}
		int j = 3;
		for(int i = 0 ; i<4 ; i++){
			
			if(arr2[i] ==  (num/(int)pow(10,j))%10){
				count2++;
			}
			j--;
		}
		printf("有%d个数相等\n",count);
		if(count2 == 4){
			break;
		}else if(count2>0 && count2<4){
			printf("%d个数字位置相同\n",  count2 );
		}else if(count2 == 0){
			puts("这些数字位置不同");
		}
	}while(rlt != num );
	puts("回答正确");
}



