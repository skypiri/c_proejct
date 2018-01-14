/*
 * Deque.h
 *
 *  Created on: 2018. 1. 14.
 *      Author: skypiri
 */

#ifndef DEQUE_H_
#define DEQUE_H_

#ifndef TRUE
#define TRUE 1
#define FALSE 0
#endif

typedef int Data;
typedef struct _node
{
	Data data;
	struct _node* next;
	struct _node* prev;
}Node;

typedef struct _dlQueue
{
	Node* head;
	Node* tail;
}DLQueue;

typedef DLQueue Deque;

void DequeInit(Deque* pdeque);
int DQIsEmpty(Deque* pdeque);

void DQAddFirst(Deque* pdeq, Data data);
void DQAddLast(Deque* pdeq, Data data);

Data DQRemoveFirst(Deque* pdeq);
Data DQRemoveLast(Deque* pdeq);

Data DQGetFirst(Deque* pdeq);
Data DQGetLast(Deque* pdeq);


#endif /* DEQUE_H_ */
