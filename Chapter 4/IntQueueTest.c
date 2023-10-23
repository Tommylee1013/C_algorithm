//
// Created by Junghun Lee on 10/23/23.
//
#include <stdio.h>
#include "IntQueue.h"

int main(void) {
    IntQueue que;

    if (Initialize(&que, 64) == -1) {
        puts("큐의 생성에 실패하였습니다");
        return 1;
    } while(1) {
        int m, x;

        printf("현재 데이터 수 : %d / %d \n", Size(&que), Capacity(&que));
        printf("(1)Enqueue (2) Dequeue (3) Peek (4) Print (0) Quit : "); scanf("%d", &m);

        if(m == 0) break;
        switch(m) {
        case 1 :
            printf("Data : "); scanf("%d", &x);
            if(Enque(&que, x) == -1)
                puts("\a오류 : 인큐에 실패하였습니다");
            break;

        case 2 :
            if(Deque(&que, &x) == -1)
                puts("\a오류 : 디큐에 실패하였습니다.");
            else
                printf("디큐에 데이터는 %d입니다.\n", x);
            break;

        case 3 :
            if(Peek(&que, &x) == -1)
                puts("\a오류 : 피크에 실패하였습니다");
            else
                printf("피크한 데이터는 %d입니다\n", x);
            break;

            case 4 :
                Print(&que);
                break;
        }
    }
    Terminate(&que);
    return 0;
}