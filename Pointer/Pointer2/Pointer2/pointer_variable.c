//
//  pointer_variable.c
//  Pointer2
//
//  Created by 정동하 on 1/23/25.
//

#include <stdio.h>

int main_t2(void)
{
    char c = 'A';
    int i = 10;
    double d = 2.1;
    
    // 포인터 변수 선언
    char* cp;
    int* ip;
    double* dp;
    
    // 변수의 주소값을 포인터에 초기화
    cp = &c;
    ip = &i;
    dp = &d;
    
    // 일반 변수의 크기
    printf("c = %zu바이트 \n", sizeof(c));     // %zu는 size_t타입을 출력할 때 사용하는 서식 지정자
    printf("i = %zu바이트 \n", sizeof(i));
    printf("d = %zu바이트 \n", sizeof(d));
    
    // 각 포인터의 크기
    printf("cp = %zu바이트 \n", sizeof(cp));
    printf("ip = %zu바이트 \n", sizeof(ip));
    printf("dp = %zu바이트 \n", sizeof(dp));
    
    return 0;
}
