//
//  incre_decre_prefix2.c
//  Operator
//
//  Created by 정동하 on 1/21/25.
//

#include <stdio.h>
#include <stdio.h>
int main_t11(void)
{
    int num1 = 2;
    int num2 = 2;
    
    printf("%d %d \n", ++num1, --num2); /// 3 1
    // 먼저 연산한뒤 값 출력
    printf("%d %d \n", num1, num2);  ///3 1
    return 0;
}
