//
// Created by Junghun Lee on 2023/07/10.
//
#include <stdio.h>

int gaussSum(int n) {
    int sum;
    if (n % 2 == 0) {
        sum = (1 + n) * n / 2;
    }
    else {
        sum = ((1 + n) * (n - 1) / 2) + (n + 1) / 2;
    }
    return sum;
}
/*
int main(void) {
    int num;
    puts("1부터 n까지의 합을 구합니다.");
    printf("n 값 : "); scanf("%d", & num);
    printf("1부터 %d까지의 합은 %d입니다. \n", num, gaussSum(num));

    return 0;
} */