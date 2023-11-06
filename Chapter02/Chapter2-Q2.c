//
// Created by Junghun Lee on 2023/07/18.
//
//
// Created by Tommy Lee on 7/11/23.
//
#include <stdio.h>
#include <stdlib.h>

int Sumof(const int a[], int n) {
    int i;
    int sum = 0;
    for (i = 0; i < n; i++) sum += a[i];
    return sum;
}
/*
int main(void) {
    int i;
    int * height;
    int number;

    printf("Number of People : ");
    scanf("%d", & number);
    height = calloc(number, sizeof(int));
    printf("Enter the height of %d people.\n", number);

    for (i = 0; i < number; i++) {
        printf("height[%d] : ", i); scanf("%d", & height[i]);
    }
    printf("The sum of value is %d.\n", Sumof(height, number));
    free(height);

    return 0;
}*/