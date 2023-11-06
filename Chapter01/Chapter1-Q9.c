//
// Created by Junghun Lee on 2023/07/10.
//
#include <stdio.h>

int sumof(int a, int b){
    int i;
    int max, min;
    int sum;

    if (b > a) {
        max = b; min = a;
    }
    else {
        max = a; min = b;
    }

    sum = 0;
    for (i = min; min <= i & i <= max; i++){
        sum += i;
    }

    return sum;
}
/*
int main(void) {
    int a, b;
    puts("a부터 b까지의 합을 구합니다.");
    printf("a 값 : "); scanf("%d", & a);
    printf("b 값 : "); scanf("%d", & b);
    if (a > b) printf("%d부터 %d까지의 합은 %d입니다. \n", b, a, sumof(a, b));
    else printf("%d부터 %d까지의 합은 %d입니다. \n", a, b, sumof(a, b));
    return 0;
}*/