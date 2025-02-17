//
//  bitwise.c
//  Operator
//
//  Created by 정동하 on 1/20/25.
//

#include <stdio.h>
int main_t2(void)
{
    unsigned char num1 = 1;             //0000 0001
    unsigned char num2 = 3;             //0000 0011
    
    printf("%d\n", num1 & num2);        // 01과 11을 비트 AND => 01
    printf("%d\n", num1 | num2);        // 01과 11을 비트 OR => 11
    printf("%d\n", num1 ^ num2);        // 01과 11을 비트 XOR => 10
    
    return 0;
}

/*
 
 AND
 
 둘 다 1이어야 1, 나머지는 0
 */
/*
 왜 OR 연산 결과가 3인지:
 OR 연산에서 1 OR 1은 1이고, 0 OR 1도 1이기 때문에, num1과 num2의 각 비트를 OR 연산하면 최종 이진수 결과가 0000 0011이 됩니다.
 이 이진수를 10진수로 변환하면 3입니다.
 
둘 중 하나 이상이 1이면 1
 */
/*
 왜 XOR 연산 결과가 10 인지:

 둘 중 하나만 1이면 1, 나머지는 0
 
 */
