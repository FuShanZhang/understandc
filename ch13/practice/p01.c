#include<stdio.h>

int main(void){
    char *s;
    scanf("%s",s);
    FILE *file = fopen(*s,"r");

    if(file == NULL){
        printf("\a无法打开文件\"%s\"。\n");
    }else{
        printf("\a成功打开文件\"%s\"。\n");
        fclose(file);
    }

    return 0;
}