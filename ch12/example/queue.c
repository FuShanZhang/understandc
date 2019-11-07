#include <stdio.h>
#include "intList.h"
#include "singlyIntNode.h"

void seqQueueOffer(IntList *list, int elem){
    intListAdd(list,elem);
}

int seqQueuePoll(IntList *list){
    int length = list->length;
    int temp =  list->data[length - 1];
    intListDelete(list,length -1);
    return temp;
}

int seqQueuePeek(IntList *list){
    return list->data[list->length - 1];
}

int seqQueueIsEmpty(IntList *list){
    return list->length == 0;
}

void linkedQueueOffer(SinglyIntNode *head, int elem){
    singlyIntNodeAdd(head,elem);
}

int linkedQueuePoll(SinglyIntNode *head){
    SinglyIntNode *curNode = head->next;
    while(curNode->next != NULL ){
        curNode = curNode->next;
    }
    return curNode->value;
    curNode = NULL;
    head->value--;
}

int linkedQueuePeek(SinglyIntNode *head){
    SinglyIntNode *curNode = head->next;
    while(curNode->next != NULL ){
        curNode = curNode->next;
    }
    return curNode->value;
}

int linkedIsEmpty(SinglyIntNode *head){
    return head->value == 0;
}