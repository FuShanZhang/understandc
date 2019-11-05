//
// Created by 李熠 on 2019/11/5.
//

#include "intList.h"

IntList *intListNew(int initSize) {
    IntList *rlt = (IntList *) malloc(sizeof(IntList));
    rlt->length = 0;
    rlt->size = initSize;
    rlt->data = malloc(initSize * sizeof(int));
    return rlt;
}

int intListDestroy(IntList *list) {
    free(list->data);
    free(list);
    return 1;
}

int intListAdd(IntList *list, int elem) {
    if (list->length >= list->size) {
        int *p = (int *) realloc(list->data, (list->size + SIZE_STEP) * sizeof(int));
        if (p == NULL) {
            printf("获取内存空间失败");
            return 0;
        }
        list->data = p;
        list->size += SIZE_STEP;
    }
    list->data[list->length] = elem;
    list->length++;
    return 1;
}

void intListDisplay(IntList *list) {
    for (int i = 0; i < list->length; ++i) {
        printf("[%d]=%d ", i, list->data[i]);
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }
}

int intListUpdate(IntList *list, int index, int elem){

            list->data[index] = elem;

}

int intListInsert(IntList *list, int index, int elem){

        intListAdd(list, list->data[index - 1]);

        for (int i = list->length - 1; i > index; i--) {
            list->data[i] = list->data[i - 1];
        }

        list->data[index] = elem;

}

int intListGet(IntList *list, int index){
        return list->data[index];

}

int intListDelete(IntList *list, int index){

        for (int i = index; i < list->length - 1; i++) {
            list->data[i] = list->data[i + 1];
        }
        list->length--;

}

int intListDeleteByElem(IntList *list, int elem){
    for(int i = 0 ; i<list->length ; i++){
        if(list->data[i] == elem ){
            intListDelete(list,i);
        }
    }
}

void serialize(IntList *list, FILE *file){
    fprintf(file,"%d",list->length);

    for(int i = 0; i<list->length; i++){
        fprintf(file,"%d",list->data[i]);
    }
}

IntList *deserialize(FILE *file){
    int length = -1;
    fscanf(file,"%d",&length);
    if(length == -1){
        printf("文件不合法！");
        return NULL;
    }
    IntList *pList = intListNew(length);
    for(int i = 0 ; i<length ; i++){
        fscanf(file,"%d",&pList->data[i]);
    }
    pList->length = length;
    return pList;
}

/*
int judgeIndex(IntList *list , int index){
    if(index>=0 && index < list->length){
        return 1;
    }else{
        puts("您的输入不合法！请重新输入");
    }
}*/
