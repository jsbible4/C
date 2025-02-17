//
//  switch_scanf_break.c
//  Condition2
//
//  Created by 정동하 on 1/20/25.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_t4(void)
{
    int num, result ;
    result = scanf("%d", &num);
    if (result != 1 ){                  // 읽어들인 항목의 개수
        printf("입력 오류 \n");
        return 1;
    }
    /* scanf의 반환값:
     
     scanf("%d", &num)는 입력된 값을 변수 num에 저장하려고 시도합니다.
     입력이 성공하면 읽어들인 데이터 항목의 개수를 반환합니다.
     예를 들어, 정수를 입력하면 반환값은 1입니다.
     입력이 실패하면 0(데이터 유형이 맞지 않음) 또는 EOF(파일의 끝에 도달) 등을 반환합니다. */
    
    switch(num)
    {
        case 1:
            printf("1입니다. \n");
        case 2:
            printf("2입니다. \n");
        default:                            // 아무 케이스에도 해당되지 않을 때
            printf("default입니다. \n");
    }
    return 0;
}
