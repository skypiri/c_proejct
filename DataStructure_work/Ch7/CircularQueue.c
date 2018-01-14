/*
 * CircularQueue.c
 *
 *  Created on: 2018. 1. 14.
 *      Author: skypiri
 */

#include "CircularQueue.h"

void QueueInit(Queue * pq) {

	pq->front = 0;
	pq->rear = 0;
}

int QIsEmpty(Queue * pq) {
	if(pq->front == pq->rear) {
		return TRUE;
	}
	else
		return FALSE;
}

int NextPosIdx(int pos) {
	if(pos == QUE_LEN -1) {
		return 0;
	} else {
		return pos + 1;
	}
}

void Enqueue(Queue * pq, Data data) {
	/* Queue가 꽉 찼다면, 삽입불가 */
	if(NextPosIdx(pq->rear) == pq->front) {
		printf("Queue is full.\n");
		return;
	} else {
		pq->rear = NextPosIdx(pq->rear);
		pq->queArr[pq->rear] = data;
	}
}

Data Dequeue(Queue * pq) {
	/* Queue가 비었다면. */
	if(QIsEmpty(pq)) {
		printf("Queue is empty.\n");
		exit(-1);
	}

	pq->front = NextPosIdx(pq->front);
	return pq->queArr[pq->front];

}

Data QPeek(Queue * pq) {
	/* Queue가 비었다면. */
	if(QIsEmpty(pq)) {
		printf("Queue is empty.\n");
		exit(-1);
	}

	return pq->queArr[pq->front++];
}
