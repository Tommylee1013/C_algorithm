//
// Created by Junghun Lee on 2023/07/11.
//
#include <stdio.h>

#define N 5
int main(void) {
    int i;
    int a[N] = {1,2,3,4,5};
    int na = sizeof(a) / sizeof(a[0]); // number of elements
    printf("배열a의 요소의 개수는 %d입니다. \n", na);


    for (i = 0; i < na; i++) {
        printf("a[%d] = %d\n", i ,a[i]);
    }

    return 0;
}
