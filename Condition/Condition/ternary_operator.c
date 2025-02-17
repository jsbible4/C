//
//  ternary_operator.c
//  Condition
//
//  Created by 정동하 on 1/21/25.
//

#include <stdio.h>
int main_t10(void)
{
    int num1 = 5;
    int num2;
    
//    if (num1)
//        num2 = 100;
//    else
//        num2 = 200;
    num2 = num1 ? 100 : 200  ;       //num1 이 참이면 100, num1 이 거짓이면 200을 할당
    
    
    printf("%d\n", num2);
    return 0;
}
