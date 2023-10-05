//
// Created by Junghun Lee on 10/6/23.
//

#ifndef C_ALGORITHM_INTSTACK_H
#define C_ALGORITHM_INTSTACK_H

typedef struct {
    int max;
    int ptr;
    int *stk;
} Intstack;

int Initialize(Intstack *s, int max);
int Push(Intstack *s, int x);
int Pop(Intstack *s, int *x);
int Peek(const Intstack *s, int *x);
void Clear(Intstack *s);
int Capacity(const Intstack *s);
int Size(const Intstack *s);
int IsEmpty(const Intstack *s);
int IsFull(const Intstack *s);
int Search(const Intstack *s, int x);

void Print(const Intstack *s);
void Terminate(Intstack *s);

#endif //C_ALGORITHM_INTSTACK_H
