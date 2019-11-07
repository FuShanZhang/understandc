/*
    读入身高和体重，计算并显示它们的平均值
*/
#include <stdio.h>

int main(void)
{
    FILE *fp;
    int ninzu = 0;           /*人数*/
    char name[100];          /*姓名*/
    double height, weight;   /*身高、体重*/
    double hsum = 0.0;       /*身高合计*/
    double wsum = 0.0;       /*体重合计*/

    if ((fp = fopen("hw.dat", "r")) == NULL) /*打开文件*/
        printf("\a文件打开失败！！！\n");
    else {
        while (fscanf(fp, "%s%lf%lf", name, &height, &weight) == 3) {
            printf("%-10s  %5.1f. %5.1f\n", name, height, weight);
            ninzu++;
            hsum += height;
            wsum += weight;
        }
        printf("------------------\n");
        printf("平均    %5.1f  %5.1f\n", hsum / ninzu, wsum / ninzu);
        fclose(fp); /*关闭文件*/
    }

    return 0;
}