//
//  switch_scanf_break2.c
//  Condition2
//
//  Created by 정동하 on 1/20/25.
//

#include <stdio.h>

int main_t5(void)
{
    int num;
    if (scanf("%d", &num) != 1) {
        printf("입력 오류 \n");
        return 1;
    }
    switch (num) {
        case 1:

        case 2:
            printf("1 또는 2 입니다. \n");
            break;
        case 3:
        case 4:
            printf("3 또는 4 입니다. \n");
            break;
            
        default:
            printf("default 입니다. \n");

    }
    return 0;
}

// 필요에 의해서 break를 생략하기

