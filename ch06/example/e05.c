// 猜数游戏

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define RECORD_MAX 100

int randInt(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int scanInt(int min, int max) {
    int input;

    if (max < min) {
        printf("%s\n", "不合法的调用");
    }

    int rlt = scanf("%d", &input);

    if (rlt == 0 || input < min || input > max) {
        printf("请输入%d~%d之间的数\n", min, max);

        while (getchar() != '\n');

        return scanInt(min, max);
    }

    return input;
}

int getGuessRlt(int input) {
    int top = 1;

    for (int i = 0; i < input; i++) {
        top *= 10;
    }
    return randInt(0, top - 1);
}


int main(int argc, char const *argv[]) {
    // 1 待选择等级  2 已选择等级，待选择次数  3 已选择次数，进行游戏  0 退出程序
    int status = 1;
    int level = 0;
    int guessLeft = 0;
    int input;
    int guessRlt = 0;
    int guessTotle = 0;

    int guessRecord[RECORD_MAX];

    while (1) {
        switch (status) {
        case 1:
            printf("%s\n", "请选择难度等级:\n1.0~9\n2.0~99\n3.0~999\n4.0~9999\n0.退出\n");
            input = scanInt(0, 4);

            if (input == 0) {
                status = 0;
            } else {
                level = input;
                status = 2;
            }

            break;

        case 2:
            printf("%s\n", "请选择次数（0~10)\n0.返回上一级");
            input = scanInt(0, 10);

            if (input == 0) {
                status = 1;
            } else {
                guessLeft = input;
                guessTotle = guessLeft;
                status = 3;
                guessRlt = getGuessRlt(level);
            }

            break;

        case 3:
            // 根据内容变化
            printf("现在开始猜数，剩余次数%d，请输⼊入数字:\n", guessLeft);
            input = scanInt(0, 9999);
            guessRecord[guessTotle - guessLeft] = input;

            if (input == guessRlt) {
                printf("%s\n", "恭喜你，猜中了了\n");

                for (int i = 0; i < guessTotle - guessLeft; i++) {
                    printf("%d\t%d\t%d\n", i + 1, guessRecord[i], guessRecord[i] - guessRlt);
                }

                status = 2;
            } else if (input > guessRlt) {
                printf("%s\n", "猜大了\n");
                guessLeft--;
            } else {
                printf("%s\n", "猜小了\n");
                guessLeft--;
            }

            if (guessLeft == 0) {
                printf("%s\n", "没有猜到，游戏结束！\n");

                for (int i = 0; i < guessTotle - guessLeft; i++) {
                    printf("%d\t%d\t%d\n", i + 1, guessRecord[i], guessRecord[i] - guessRlt);
                }

                status = 2;
            }
            break;
        case 0:
            // 程序退出
            return 0;
        }
    }



    return  0;
}
