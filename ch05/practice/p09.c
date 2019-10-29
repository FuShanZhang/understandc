/*纵向显示上一题的分布图*/
#include<stdio.h>
#define NUMBER 80

int main(void){
	int i,j;
	int num;
	int tensu[NUMBER];
	int bunpu[11] = {0};

	printf("请输入学生人数");

	do{
		scanf("%d",&num);
		if(num < 1 || num>NUMBER){
			printf("\a请输入1～%d的数\n",NUMBER );
		}
	}while(num < 1 || num > NUMBER);

	printf("请输入%d人的分数。\n",num);

	for(i=0 ; i<num ; i++){
		printf("%2d号:", i+1);
		do{
			scanf("%d",&tensu[i]);
			if(tensu[i]<0 || tensu[i] > 100)
				printf("\a请输入1～100的数:");
		}while(tensu[i] < 0 || tensu[i] > 100);
		bunpu[tensu[i]/10]++;
	}
	/*不到100分*/
	
	for(j = num ; j>0 ; j--){
		for(i = 0 ; i<=10 ; i++){
			if(bunpu[i] >= j){
				printf("   *");
			}else{
				printf("    ");
			}
		}
		printf("\n");
	}
			
	printf("-----------------------------------------------\n");
	for(i=0 ; i<=100 ; i+=10)
			printf("  %d",i );
	printf("\n");
}



