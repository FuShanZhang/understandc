//
// Created by 李熠 on 2019/10/12.
//
#include "intList.h"
#include "singlyIntNode.h"
/**
 * 写入队列
 */
void seqQueueOffer(IntList *, int);

/**
 * 从队列中读取
 * @return
 */
int seqQueuePoll(IntList *);

/**
 * 查看队列顶端的元素，但是并不读取
 * @return
 */
int seqQueuePeek(IntList *);

/**
 *
 * @return 为空返回1，否则返回0
 */
int seqQueueIsEmpty(IntList *);

/**
 * 写入队列
 */
void linkedQueueOffer(SinglyIntNode *, int);

/**
 * 从队列中读取
 * @return
 */
int linkedQueuePoll(SinglyIntNode *);

/**
 * 查看队列顶端的元素，但是并不读取
 * @return
 */
int linkedQueuePeek(SinglyIntNode *);


/**
 *
 * @return 为空返回1，否则返回0
 */
int linkedIsEmpty(SinglyIntNode *);
