#include "singlyIntNode.h"

SinglyIntNode *getpreNode(SinglyIntNode *list, int index);

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
    printf("\n");
}

int singlyIntNodeDelete(SinglyIntNode *list, int index) {
    SinglyIntNode *preNode = getpreNode(list, index);

    if (preNode == NULL) {
        printf("index 不合法\n");
        return 0;
    }
    SinglyIntNode *node = preNode->next->next;
    free(preNode->next);
    preNode->next = node;

    return 1;
}

SinglyIntNode *getpreNode(SinglyIntNode *list, int index) {
    int count = -1;

    SinglyIntNode *curNode = list;
    SinglyIntNode *preNode = NULL;

    while (curNode != NULL && curNode->next != NULL) {
        count++;
        if (count == index) {
            preNode = curNode;
            break;
        }
        curNode = curNode->next;
    }
    return preNode;
}


int singlyIntNodeInsert(SinglyIntNode *list, int index, int elem) {
    SinglyIntNode *preNode = getpreNode(list, index);
    if (preNode == NULL) {
        printf("index 不合法\n");
        return 0;
    }

    SinglyIntNode *newNode = singlyIntNodeCreate();
    SinglyIntNode *temp = preNode->next;

    preNode->next = newNode;
    newNode->next = temp;
    newNode->value = elem;
    return 1;

}

void singlyIntNodeRevert(SinglyIntNode *list) {

    SinglyIntNode *preNode = list;
    SinglyIntNode *curNode = list->next;
    SinglyIntNode *firstNode = list->next;
    SinglyIntNode *temp;

    while (curNode != NULL) {
        temp = curNode->next;
        curNode->next = preNode;
        preNode = curNode;
        curNode = temp;
    }

    list->next = preNode;
    firstNode->next = NULL;

}


void singlyIntNodeSerialize(SinglyIntNode *list, FILE *file) {
    fprintf(file, "%d ", list->value);
    SinglyIntNode *curNode = list->next;
    while (curNode != NULL) {
        fprintf(file, "%d ", curNode->value);
        curNode = curNode->next;
    }
}

SinglyIntNode *singlyIntNodeDeserialize(FILE *file) {
    int length = -1;
    fscanf(file, "%d ", &length);

    if (length == -1) {
        printf("文件不合法");
        return NULL;
    }
    SinglyIntNode *head = singlyIntNodeCreate();
    int content;
    for (int i = 0; i < length; ++i) {
        fscanf(file, "%d", &content);
        singlyIntNodeAdd(head, content);
    }
    return head;
}

int singlyIntNodeDeleteElem(SinglyIntNode *list, int elem){
    SinglyIntNode *curNode = list->next;
    int count = -1;
    while(curNode->next != 0){
        count++;
        if(curNode->value == elem){
            break;
        }
        curNode = curNode->next;
    }
    singlyIntNodeDelete(list,count);

    return 1;
}

int singlyIntNodeUpdate(SinglyIntNode *list, int index, int elem){
    SinglyIntNode *curNode = list->next;
    int count = -1;
    while(curNode->next != NULL){
        count++;
        if(count == index){
            curNode->value = elem;
        }
        curNode = curNode->next;
    }

    return 1;
}

int singlyIntNodeGet(SinglyIntNode *list, int index){
    SinglyIntNode *curNode = list->next;
    SinglyIntNode *head = list;
    int count = -1;

    if(index<0 || index>=head->value){
        puts("您的输入不合法");
        return 0;
    }

    while(curNode->next != NULL){
        count++;
        if(count == index){
            return curNode->value;
        }
        curNode = curNode->next;
    }

}
















