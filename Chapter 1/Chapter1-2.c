//
// Created by Tommy Lee on 7/10/23.
//
# include <stdio.h>

int max3(int a, int b, int c){
    int max = a;
    if(b > max) max = b;
    if(c > max) max = c;
    return max;
}