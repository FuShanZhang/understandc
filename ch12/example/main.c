#include <stdio.h>

#include "intList.h"

#include "singlyIntNode.h"

int main() {

   /* IntList *pList = intListNew(10);


    for (int i = 0; i < 20; ++i) {
        intListAdd(pList, i + 1);
    }

    intListDeleteByElem(pList,15);

    //intListUpdate(pList,1,10);

  //  intListInsert(pList,1,10);



    intListDisplay(pList);


    intListDestroy(pList);

   // printf("%d\n",intListGet(pList,20));*/

  /* FILE *file = fopen("./data","r");

   IntList *display = deserialize(file);

   intListDisplay(display);*/

    //fclose(file);

    SinglyIntNode *head = singlyIntNodeCreate();


    for (int i = 0; i < 20; ++i) {
        singlyIntNodeAdd(head, i + 1);
    }

    singlyIntNodeDisplay(head);


    return 0;
}