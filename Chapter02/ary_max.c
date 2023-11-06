//
// Created by Tommy Lee on 7/11/23.
//
#include <stdio.h>
#include <stdlib.h>

int maxof(const int a[], int n) {
    int i;
    int max = a[0];
    for (i = 1; i < n; i++) if (a[i] > max) max = a[i];
    return max;
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
    printf("The maximum value is %d.\n", maxof(height, number));
    free(height);

    return 0;
}
 */