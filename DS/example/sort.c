//
// Created by 李熠 on 2019/11/7.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printArr(int a[], int length);

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

//void swap(int a, int b) {
//    int temp = a;
//    a = b;
//    b = temp;
//}

void bubbleSort(int a[], int length) {
    for (int i = 0; i < length - 1; ++i) {
        for (int j = 0; j < length - i - 1; ++j) {
            if (a[j] > a[j + 1]) {
                swap(&a[j], &a[j + 1]);
            }
        }
        printArr(a, length);
    }
}

void printArr(int a[], int length) {
    for (int i = 0; i < length; ++i) {
        printf("%d ", a[i]);
    }

    printf("\n");
}

void unsort(int a[], int length) {
    for(int i = 0 ; i<length - 1  ; i++){
        int s =  rand()%(10-i );
        int temp;
        temp = a[length - 1 - i];
        a[length - 1 - i] = a[s];
        a[s] = temp;
    }
}

int main(void) {
    srand(time(NULL));



    int a[] = {0,1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("-----------");

    unsort(a,10);

    //bubbleSort(a, sizeof(a) / sizeof(int));
    printArr(a, sizeof(a) / sizeof(int));

    return 0;
}