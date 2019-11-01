/*键盘接受一个字符串，*/
/*去字符串头尾*/
/*接收字符串去空格*/
#include<stdio.h>
void removeAllSpace(char a[],char b) {
    char a2[100][100];
    int i = 0;
    int j = 0;
    int count = 0;
    int len = 0;

    while (a[len]) {
        len++;
    }
   // printf("%d\n",len);

    while (len--) {

        if (a[i] == b) {
            a[i] = '\0';
            a2[count][j] = a[i];
            count++;
            j = -1;
        } else {
            a2[count][j] = a[i];
        }
        i++;
        j++;
    }

    for (int i = 0 ; i < count+1 ; i++) {
        printf("%s  ", a2[i]);
    }
    printf("\n");

}

int main(void) {
	char b;	scanf("%c",&b);
    char a[100];	scanf("%s",a);
    
    //printf("%s\n",a);
    removeAllSpace(a,b);
}