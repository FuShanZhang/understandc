
#ifndef DEMOCLION_INTLIST_H
#define DEMOCLION_INTLIST_H

#include <stdlib.h>
#include <stdio.h>

#define SIZE_STEP 10

typedef struct IntList {
    // 当前存放内容的长度
    int length;
    // 存放数据的内存的首地址
    int *data;
    // 总共分配的内存空间
    int size;
} IntList;

IntList *intListNew(int initSize);

int intListDestroy(IntList *);

void serializeB(IntList *list, FILE *file);

IntList *deserializeB(FILE *file);

void serialize(IntList *list, FILE *file);

IntList *deserialize(FILE *file);

/**
 *
 * @param list
 * @param elem
 * @return 1操作成功，0操作失败
 */
int intListAdd(IntList *list, int elem);

int intListDelete(IntList *list, int index);

/**
 * 根据元素进行删除，删除第一个找到的元素
 * @param list
 * @param elem
 * @return 1操作成功，0操作失败
 */
int intListDeleteByElem(IntList *list, int elem);

void intListDisplay(IntList *list);

/**
 *
 * @param list
 * @param index
 * @param elem
 * @return  1操作成功，0操作失败
 */
int intListUpdate(IntList *list, int index, int elem);


/**
 * 指定位置插入元素
 * @param list
 * @param index
 * @param elem
 * @return  1操作成功，0操作失败
 */
int intListInsert(IntList *list, int index, int elem);

/**
 * 返回指定位置的元素
 * @param list
 * @param index
 * @return
 */
int intListGet(IntList *list, int index);

#endif //DEMOCLION_INTLIST_H
