/*6名学生2门课程（语文,数学）的分数,*/
#include<stdio.h>
int main(void){
	int arr[6][2];
	int sumChinese = 0;
	double avgChinese ;
	int sumMath = 0;
	double avgMath;
	int arrStudent[6];

	for(int i = 0 ; i<6 ; i++){
		for(int j = 0; j<2 ;j++){
			if(j == 0){
				printf("请输入学生%d的语文成绩：",i+1);scanf("%d",&arr[i][j]);
			}else{
				printf("请输入学生%d的数学成绩：",i+1);scanf("%d",&arr[i][j]);
			}
		}
	}
	for(int i = 0 ; i<6 ; i++){
		 sumChinese = sumChinese + arr[0][i]; 
		 sumMath = sumMath + arr[1][i];
		avgMath = sumMath/6.0;
		avgChinese = sumChinese/6.0;
	}
	printf("数学总分:%d,数学平均分:%.1f,语文总分:%d,语文平均分:%.1f\n",sumMath,avgMath,sumChinese,avgChinese );

	for(int i = 0 ; i<6 ; i++){
		printf("学生%d总分:%d,学生%d平均分:%d\n",i+1,i+1,arr[1][i]+arr[2][i],(arr[1][i]+arr[2][i])/2 );
	}	
}













