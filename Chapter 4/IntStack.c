//
// Created by Junghun Lee on 10/6/23.
//

#include "IntStack.h"
#include <stdio.h>
#include <stdlib.h>

int Initialize(Intstack *s, int max){
    s -> ptr = 0;
    if((s-> stk = calloc(max, sizeof(int))) == NULL){
        s->max = 0;
        return -1;
    }
    s -> max = max;
    return 0;
}