#include <stdio.h>
#include "biTreeNode.h"

static int count = 0;

/**
 * 创建树
 * @return 树根节点指针
 */
BiTreeNodeAddr biTreeCreate(BiTreeElement elem){
    BiTreeNodeAddr  biTreeNodeAddr = (BiTreeNodeAddr)malloc(sizeof(BiTreeNode));
    biTreeNodeAddr->element = elem;
    biTreeNodeAddr->left = NULL;
    biTreeNodeAddr->right = NULL;
    return biTreeNodeAddr;
}

/**
 * 向节点中添加左右两个子节点
 * BiTreeElement如果是null，则不添加子节点
 * @return 添加成功返回1，失败返回0
 */
char biTreePutLeaf(BiTreeNodeAddr root, BiTreeElement lElem, BiTreeElement rElem){
    if(lElem == NULL && rElem == NULL){
        return 0;
    }
    if(lElem != NULL){
        root->left = biTreeCreate(lElem);
    }

    if(rElem != NULL){
        root->right = biTreeCreate(rElem);
    }
    return 1;
}

/**
 * 树的前序遍历
 * 根结点 ---> 左子树 ---> 右子树
 */
void biTreePreOrder(BiTreeNodeAddr root){
    if(root == NULL){
        return;
    }

    printBiTreeElement(root->element);
    biTreePreOrder(root->left);
    biTreePreOrder(root->right);
}

/**
 * 树的中序遍历
 * 左子树---> 根结点 ---> 右子树
 */
void biTreeInOrder(BiTreeNodeAddr root){
    if(root == NULL){
        return;
    }
    biTreeInOrder(root->left);
    printBiTreeElement(root->element);
    biTreeInOrder(root->right);
}

/**
 * 树的后序遍历
 * 左子树 ---> 右子树 ---> 根结点
 */
void biTreePostOrder(BiTreeNodeAddr root){
    if(root == NULL){
        return;
    }
    biTreePostOrder(root->left);
    biTreePostOrder(root->right);
    printBiTreeElement(root->element);
}

/**
 * 获取树的高度
 * @return
 */
int biTreeGetHeight(BiTreeNodeAddr root){
    count++;
    if(root == NULL){
        return count;
    }
    biTreeGetHeight(root->left);

    return 0;
}



void printBiTreeElement(BiTreeElement elem){
    printf("%s",elem);
}