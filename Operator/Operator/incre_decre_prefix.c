//
//  incre_decre_prefix.c
//  Operator
//
//  Created by 정동하 on 1/21/25.
//

#include <stdio.h>
int main_t9(void)
{
    int num1 = 2;
    int num2 = 2;
    int num3;
    int num4;
    
    num3 = ++num1;      // num1의 값 1 증가시킨 뒤, num1의 값을 num3에 할당
    num4 = --num2;      // num2의 값 1 감소시킨 뒤, num2의 값을 num4에 할당
    
    /* 전위연산자 : 연산 -> 할당
       후위연산자 : 할당 -> 연산 */
    
    printf("%d \t %d \n", num3, num4 );
    printf("%d \t %d \n", num1, num2 );
    
    return 0;
}

// 3 1 3 1  ( num1 num2 의 값도 바뀌어있다. )

