//
//  incre_decre_postfix2.c
//  Operator
//
//  Created by 정동하 on 1/21/25.
//

#include <stdio.h>
int main_t10(void)
{
    int num1 = 2;
    int num2 = 2;
    
    printf("%d %d \n", num1++, num2--); ///2 2
    // num1 num2의 값을 먼저 출력한 뒤 증감 연산자 동작
    printf("%d %d \n", num1, num2);  ///3 1
    return 0;
}
