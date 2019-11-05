#include "singlyIntNode.h"

int main(void) {

    SinglyIntNode *head = singlyIntNodeCreate();

    for (int i = 0; i < 15; ++i) {
        singlyIntNodeAdd(head, i + 1);
    }

    singlyIntNodeDelete(head,0);

    singlyIntNodeDisplay(head);


    //singlyIntNodeDestroy(head);
    return 0;
}