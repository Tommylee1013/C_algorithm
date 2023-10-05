//
// Created by Junghun Lee on 10/6/23.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[10];
    int height;
    int weight;
} Person;

int npcmp(const Person *x, const Person *y){
    return strcmp(x -> name, y -> name);
}

/*
int main(void) {
    Person x[] = {
            { "Kim", 179, 79},
            { "Park", 172, 63},
            { "Lee", 176, 52},
            { "Choi", 165, 51},
            { "Ham", 181, 73},
            { "Hong", 172, 84},
    };
    int nx = sizeof(x) / sizeof(x[0]);
    int retry;
    puts("이름으로 검색합니다.");
    do {
        Person temp, *p;
        printf("name? : "); scanf("%s", temp.name);
        p = bsearch(&temp, x, nx, sizeof(Person),
                    (int(*)(const void *, const void *)) npcmp);
        if(p == NULL) {
            puts("검색에 실패했습니다.");
        } else {
            puts("검색 성공 !! 아래 요소를 찾았습니다.");
            printf("x[%d] : %s %dcm %dkg\n",
                   (int)(p - x),
                   p->name,
                   p->height,
                   p->weight);

        }
        printf("다시 검색할까요? (1) 예 / (0) 아니요 : ");
        scanf("%d", &retry);
    } while(retry == 1);
    return 0;
}
*/