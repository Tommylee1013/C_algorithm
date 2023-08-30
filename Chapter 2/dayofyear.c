//
// Created by Junghun Lee on 2023/08/30.
//

#include <stdio.h>

int mdays[][12] = {
        {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
        {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

int isleep(int year){
    return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

int dayofyear(int y, int m, int d){
    int i;
    int days = d;
    for(i = 1; i < m; i++) days += mdays[isleep(y)][i - 1];
    return days;
}

/*
int main(void){
    int year, month, day;
    int retry;
    do{
        printf("year : "); scanf("%d", &year);
        printf("month : "); scanf("%d", &month);
        printf("day : "); scanf("%d", &day);
        printf("%d년의 %d일째입니다.\n", year, dayofyear(year, month, day));
        printf("다시 할까요? (1 ... 예 / 0 ... 아니오)"); scanf("%d", &retry);
    } while(retry == 1);

    return 0;
}*/