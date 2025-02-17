//
//  if2.c
//  Condition
//
//  Created by 정동하 on 2/1/25.
//

#include <stdio.h>
/*
 
 정수를 입력 받아서
 양수이면 양의 정수 출력
 음수이면 양의 정수로 변환해서 출력
 
 
 예)
 (입력)
 입력 오류 발생했습니다.
 
 5 (입력)
 결과는 5 입니다.
 
 -10 ( 입력)
 음의 정수를 양의 정수로 변환했습니다.
 결과는 10입니다.
 
 */

#define _CRT_SECURE_NO_WARNINGS

int main_tt1(void)
{
    int n;
    if(scanf("%d", &n ) != 1)       // %d 정수로 입력받는데 맞으면 1 아니면 1이 아님.
    {
        printf("입력 오류 발생했습니다. \n");
        return 1;
    }
    
    if ( n < 0)
    {
        n *= -1;            // -1 곱해서 양수로 바꿔주기
        printf("음의 정수를 양의 정수로 변환했습니다. \n");
        
    }
    
    printf("\n 결과는 %d 입니다. \n", n);
    return 0;
}
