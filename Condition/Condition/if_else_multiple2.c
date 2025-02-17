//
//  if_else_multiple2.c
//  Condition
//
//  Created by 정동하 on 1/21/25.
//

#include <stdio.h>
int main_t8(void)
{
    int num1 = 10;
    int num2 = 20;
    
    if ( num1 == 10)
    {
        if (num2 == 20)
        {
            printf("참 \n");
        }
        else
            printf("거짓 \n");
    }
    else
        printf("거짓 \n");
    return 0;
}
