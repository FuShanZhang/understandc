#include<stdio.h>

int main(void){
    char *s ;
    scanf("%s",s);
    FILE *file = fopen(s,"w");

    if(file == NULL){
        printf("\a无法打开文件\"%s\"。\n",s);
    }else{
        printf("\a成功打开文件\"%s\"。\n",s);
        fclose(file);
    }

    return 0;
}