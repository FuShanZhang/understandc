#include<stdio.h>

int main(void){
	int ch;
	FILE *fp;
	char fname[FILENAME_MAX];
	int count = 0;

	printf("文件名：");	scanf("%s",fname);

	if((fp = fopen(fname,"r")) == NULL){
		puts("文件打开失败");
	}else{
		while((ch = fgetc(fp)) != EOF){
			if(ch == (int)'\n'){
				count++;
			}
		}
		fclose(fp);
	}
	printf("%d\n",count );

	return 0;
}