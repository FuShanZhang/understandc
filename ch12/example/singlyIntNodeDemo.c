#include "singlyIntNode.h"

int main(void) {

    SinglyIntNode *head = singlyIntNodeCreate();

    for (int i = 0; i < 15; ++i) {
        singlyIntNodeAdd(head, i + 1);
    }

    //singlyIntNodeUpdate(head,1,10);

    printf("%d\n",singlyIntNodeGet(head,1));

    singlyIntNodeDisplay(head);



    //singlyIntNodeDestroy(head);
    return 0;
}