//
//  literal_integer.c
//  Variable
//
//  Created by 정동하 on 1/20/25.
//

#include <stdio.h>

int main_l(void)
{
    int add = 3 + 7 ;           // 정수 리터럴
    printf("3 + 7 = %d\n", add);
    printf("%d X %d = %d\n", 30, 100, 30 * 100);
    printf("%f\n", 0.1f);       // 실수 리터럴 소수점 표기법 0.100000
    printf("%f\n", 1.0e-5f);    // 실수 리터럴 지수 표기법 0.000010
    printf("%c\n", 'a');        // 문자 리터럴
    return 0;
}
