//
//  if_scanf.c
//  Condition
//
//  Created by 정동하 on 1/21/25.
//

#include <stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main_t4(void)
{
    int num1;
    int result;
    
    result = scanf("%d", &num1);
    if (result != 1)
    {
        printf("입력 오류 \n");
        return 1;
    }
    if (num1 == 10)
        printf("10입니다. \n");
    if (num1 == 20)
        printf("20입니다. \n");
    
    return 0;
}
