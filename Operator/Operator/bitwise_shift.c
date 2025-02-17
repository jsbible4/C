//
//  bitwise_shift.c
//  Operator
//
//  Created by 정동하 on 1/21/25.
//

#include <stdio.h>

int main_t4(void)
{
    unsigned char num1 = 3 ;  // 0000 0011
    unsigned char num2 = 24;    // 0001 1000
    
    printf("%u\n", num1 << 3);      // 왼쪽으로 3만큼 이동 0001 1000(비트 단위로 조작)
    printf("%u\n",  num2 >>2);  // 오른쪽으로 2만큼 이동  0000 0110
    
    return 0;           //24, 6 나옴
    
}
// 변수 >>, << 이동할 비트 수


