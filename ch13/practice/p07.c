#include<stdio.h>

int main(void){
	int ch;
	FILE *fp;
	int count = 0;
	char fname[FILENAME_MAX];

	printf("文件名:");
	scanf("%s",fname);

	if((fp = fopen(fname,"r")) == NULL){
		printf("文件打开失败。");
	}else{
		while((ch = fgetc(fp)) != EOF){
			count++;
		}
		fclose(fp);
	}

	printf("%d\n",count);

	return 0;
}