//
// Created by Junghun Lee on 2023/07/14.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Maxof(const int a[], int n){
    int i;
    int max = a[0]; // maximum value
    for (i = 1; i < n ; i ++)
        if(a[i] > max) max = a[i];
    return max;
}
/*
int main(void){
    int i;
    int *height;
    int number;
    printf("a number of people : "); scanf("%d", & number);
    height = calloc(number, sizeof(int));
    srand(time(NULL));
    for(i = 0; i < number; i++){
        height[i] = 100 + rand() % 90;
        printf("height[%d] = %d\n", i, height[i]);
    }
    printf("The maximum value is %d.\n", Maxof(height, number));
    free(height);

    return 0;
}*/