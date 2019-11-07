
#include <stdio.h>
#include <stdlib.h>

typedef struct SinglyIntNode {
    // 指向下一个节点
    struct SinglyIntNode *next;
    // 保存的值
    int value;
} SinglyIntNode;

SinglyIntNode *singlyIntNodeCreate();

void singlyIntNodeDestroy(SinglyIntNode *);

void singlyIntNodeDisplay(const SinglyIntNode *);

/**
 * 结尾追加元素
 * @param head
 * @param elem
 */
void singlyIntNodeAdd(SinglyIntNode *head, int elem);

/**
 * 删除指定位置的数据
 * @param list
 * @param index
 * @return 1成功删除，0index不合法或者是超出范围
 */
int singlyIntNodeDelete(SinglyIntNode *list, int index);

/**
 * 删除第一个遇到的元素，注意后续的元素依次前移，并且修改length
 * @param list
 * @param elem
 * @return 1成功删除，0元素没有查找到
 */
int singlyIntNodeDeleteElem(SinglyIntNode *list, int elem);

/**
 * 将数据倒序
 * @param list
 */
void singlyIntNodeRevert(SinglyIntNode *list);

/**
 * 向指定位置插入数据，后面的数据后移，如果插入的位置超过最大位置，则提示插入失败，返回0
 * @param list
 * @param index
 * @param elem
 * @return 插入成功返回1，失败返回0
 */
int singlyIntNodeInsert(SinglyIntNode *list, int index, int elem);

/**
 * 更新指定位置的数据
 * @param list
 * @param index
 * @param elem
 * @return 更新成功返回1，传入的index不合法返回0
 */
int singlyIntNodeUpdate(SinglyIntNode *list, int index, int elem);

/**
 * 查询指定位置的数字
 * @param list
 * @param index
 * @return index不合法返回0
 */
int singlyIntNodeGet(SinglyIntNode *list, int index);

void singlyIntNodeSerializeB(SinglyIntNode *list, FILE *file);

SinglyIntNode *singlyIntNodeDeserializeB(FILE *file);

void singlyIntNodeSerialize(SinglyIntNode *list, FILE *file);

SinglyIntNode *singlyIntNodeDeserialize(FILE *file);
