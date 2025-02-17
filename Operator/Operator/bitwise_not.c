//
//  bitwise_not.c
//  Operator
//
//  Created by 정동하 on 1/21/25.
//

#include <stdio.h>

int main_t3(void)
{
    unsigned char num1 = 162;   // 1010 0010
    unsigned char num2;
    
    num2 = ~num1 ;          //0101 1101     93
    printf("%u\n", num2);       //unsigned --> %u
    return 0;
    
    
}
