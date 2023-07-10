//
// Created by Tommy Lee on 7/10/23.
//
#include <stdio.h>

int min3(int a, int b, int c) {
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    return min;
}