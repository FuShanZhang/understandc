#include "stack.h"
#include<stdio.h>

int seqStackPush(IntList *list, int elem){
    intListAdd(list,elem);
}

int seqStackPop(IntList *list){
    int length = list->length;
    int temp =  list->data[length - 1];
    intListDelete(list,length -1);
    return temp;
}

int seqStackIsEmpty(IntList *list){
    return list->length == 0;
}

int seqStackPeek(IntList *list){
    return list->data[list->length - 1];
}

int seqStackSearch(IntList *list, int elem){

}