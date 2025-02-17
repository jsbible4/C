//
//  if_else.c
//  Condition
//
//  Created by 정동하 on 1/21/25.
//

#include <stdio.h>
int main_t5(void)
{
    int num1 = 5;
    
    if(num1 == 10)      // if 조건문 끝에는 세미콜론을 붙이면 안됨.
    
        printf("10입니다. \n");
    else
        printf("10이 아닙니다.\n");
    
    return 0;
}
