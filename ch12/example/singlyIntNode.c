#include "singlyIntNode.h"

SinglyIntNode *singlyIntNodeCreate() {
    SinglyIntNode *head = (SinglyIntNode *) malloc(sizeof(SinglyIntNode));
    head->next = NULL;
    head->value = 0;
    return head;
}

void singlyIntNodeAdd(SinglyIntNode *head, int elem) {
    if (head == NULL) {
        printf("不合法的head");
        return;
    }

    SinglyIntNode *curNode = head;

    while (curNode->next != NULL) {
        curNode = curNode->next;
    }

    SinglyIntNode *newNode = singlyIntNodeCreate();
    newNode->value = elem;
    curNode->next = newNode;
    head->value++;

}

void singlyIntNodeDisplay(const SinglyIntNode *head) {
    if (head == NULL) {
        printf("不合法的head");
        return;
    }

    SinglyIntNode *curNode = head->next;

    int index = 0;
    while (curNode != NULL) {
        printf("[%d]=%d ", index++, curNode->value);
        if ((index + 1) % 10 == 0) {
            printf("\n");
        }
        curNode = curNode->next;
    }
}

void singlyIntNodeDestroy(SinglyIntNode *head){
    SinglyIntNode *curNode = head;

    while (curNode->next != NULL) {
        curNode = curNode->next;
    }
    while(curNode->next != NULL){
        free(curNode->next);
        curNode->next = curNode;
    }

    free(head);
}

int singlyIntNodeDelete(SinglyIntNode *list, int index){
    if (list == NULL) {
        printf("不合法的head");
    }
    printf("%d\n",list[index].value);

   list->next = list;
}

SinglyIntNode *getNode(SinglyIntNode *head , int index){
    if(index > head-index)
}
















