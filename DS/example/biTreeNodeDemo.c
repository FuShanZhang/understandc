#include <stdio.h>
#include "biTreeNode.h"

int main(void){

    BiTreeNodeAddr root = biTreeCreate("A");
    biTreePutLeaf(root,"B","C");
    biTreePutLeaf(root->left,"D","E");
    biTreePutLeaf(root->right,"F","G");

    printf("%d\n",biTreeGetHeight(root));
    //biTreePostOrder(root);
    printf("\n");

    return 0;

}