
#include<stdio.h>

int main(void){
    FILE *file = fopen("./HelloWorld","a");


    fprintf(file,"%10s","Hello!");

    //char *input;

    //fscanf(file,"%s",input);

   // printf("%s\n",input);

    fclose(file);
}