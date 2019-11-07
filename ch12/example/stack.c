#include "stack.h"
#include<stdio.h>

int seqStackPush(IntList *list, int elem){
    intListAdd(list,elem);
}

int seqStackPop(IntList *list){
    return list->data[0];
}

int seqStackIsEmpty(IntList *list){
    return list->length == 0;
}