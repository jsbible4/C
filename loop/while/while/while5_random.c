//
//  while5_random.c
//  while
//
//  Created by 정동하 on 1/21/25.
//

#include <stdio.h>
#include <stdlib.h>     //srand, rand() 함수가 선언된 헤더
#include <time.h>       // time 함수가 선언된 헤더

int main_t5(void)
{
    srand(time(NULL)); // 현재 시스템 시간을 기준으로 난수 시드 값을 다르게 설정됨
    
    int i = 0;
    while ( i != 3) {
        i = rand() % 10;        //10으로 나눈 나머지만 나올 수 있도록 ( 10 미만의 정수 나오게 함)
        printf("%d\n", i);
    }
    
    return 0;
}
