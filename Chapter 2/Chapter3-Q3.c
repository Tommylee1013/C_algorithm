//
// Created by Junghun Lee on 2023/07/18.
//
//
// Created by Tommy Lee on 7/11/23.
//
#include <stdio.h>
#include <stdlib.h>

double avgof(const int a[], int n) {
    int i;
    int sum = 0;
    double avg = 0;
    for (i = 0; i < n; i++) sum += a[i];
    avg = sum / n;
    return avg;
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
    printf("The average of value is %.2f.\n", avgof(height, number));
    free(height);

    return 0;
}
 */