//
//  incre_decre_postfix.c
//  Operator
//
//  Created by 정동하 on 1/21/25.
//

#include <stdio.h>

int main_t8(void)
{
    int num1 = 2;
    int num2 = 2;
    int num3;
    int num4;
    
    num3 = num1++;      // assign num1 to num3 and add 1 num1's value
    num4 = num2--;      // assign num2 to num4 and minus 1 num2's value
    
    printf("%d \t %d \n", num3, num4 );
    printf("%d \t %d \n", num1, num2 );
    
    return 0;
}
