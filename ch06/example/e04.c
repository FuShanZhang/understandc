/*抽签程序*/
/*随机生成数*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main(void) {
    char *b;
    char *a = "0";

    do {
        printf("输入任意内容抽签，输入0退出");
        scanf("%s", &*b);

        if (strcmp(b, a)) {
            int r;
            srand((unsigned)time(NULL));
            r = rand() % 100;

            if (r < 5) {
                puts("大吉");
            } else if (r >= 5 && r < 15) {
                puts("中吉");
            } else if (r >= 30 && r < 60) {
                puts("吉");
            } else if (r >= 60 && r < 80) {
                puts("末吉");
            } else if (r >= 80 && r < 95) {
                puts("凶");
            } else if (r >= 95 && r < 100) {
                puts("大凶");
            }
        }
    } while (strcmp(b, a));

    return 0;
}