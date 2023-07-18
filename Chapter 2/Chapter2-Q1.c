//
// Created by Junghun Lee on 2023/07/18.
//
//
// Created by Tommy Lee on 7/11/23.
//
#include <stdio.h>
#include <stdlib.h>

int minof(const int a[], int n) {
    int i;
    int min = a[0];
    for (i = 1; i < n; i++) if (a[i] < min) min = a[i];
    return min;
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
    printf("The minimum value is %d.\n", minof(height, number));
    free(height);

    return 0;
}
*/