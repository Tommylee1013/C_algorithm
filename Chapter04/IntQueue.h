//
// Created by Junghun Lee on 10/23/23.
//

#ifndef C_ALGORITHM_INTQUEUE_H
#define C_ALGORITHM_INTQUEUE_H

typedef struct {
    int max;
    int num;
    int front;
    int rear;
    int *que;
} IntQueue;

int Initialize(IntQueue *q, int max);

int Enque(IntQueue *q, int x);

int Deque(IntQueue *q, int *x);

int Peek(const IntQueue *q, int *x);

void Clear(IntQueue *q);

int Capacity(const IntQueue *q);

int Size(const IntQueue *q);

int IsEmpty(const IntQueue *q);

int IsFull(const IntQueue *q);

int Search(const IntQueue *q, int x);

void Print(const IntQueue *q);

void Terminate(IntQueue *q);

#endif //C_ALGORITHM_INTQUEUE_H