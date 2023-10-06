//
// Created by Junghun Lee on 10/6/23.
//
#include "IntStack.h"
#include <stdio.h>

int main(void) {
    IntStack s;
    if(Initialize(&s, 64) == -1){
        puts("스택 생성에 실패했습니다.");
        return 1;
    }

    while(1) {
        int menu, x;
        printf("현재 데이터 수 : %d / %d\n", Size(&s), Capacity(&s));
        printf("(1) Push (2) Pop (3) Peek (4) Print (5) Quit"); scanf("%d", &menu);

        if(menu == 0) break;
        switch(menu) {
            case 1 :
                printf("Data : ");
                scanf("%d", &x);
                if(Push(&s, x) == -1) puts("\a오류 : Push에 실패하였습니다.");
                break;

            case 2 :
                if(Pop(&s, &x) == -1) puts("\a오류 : Pop에 실패하였습니다.");
                else printf("Pop data는 %d입니다.\n", x);
            break;

            case 3 :
                if(Peek(&s, &x) == -1) puts("\a오류 : Peek에 실패하였습니다.");
                else printf("Peek Data는 %d입니다.\n", x);
                break;

            case 4 : Print(&s); return 0;
        }
    }
    Terminate(&s);
    return 0;
}
