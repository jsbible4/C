//
//  array_init.c
//  Array
//
//  Created by 정동하 on 1/23/25.
//

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main_t1(void)
{
    // 배열은 한 개 이상 초기화 시, 나머지 공간은 0으로 채워짐
    int a[100] = {0};
    printf("%d %d %d %d %d \n", a[0], a[1], a[2], a[10], a[20]);
    printf("\n");
    int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    int i;
    int inputMonth;
    
    for (i = 1; i <= 12; i++)
        printf("%2d월의 날짜는 %2d입니다. \n", i , month[i]);     // 2자릿수 정수 보장
    
    printf("\n\n 월 입력: ");
    if(scanf("%d", &inputMonth) != 1){
        printf("입력 오류입니다.\n");
        return 1;
    }
    printf("입력한 월의 날짜는 %d일 입니다\n", month[inputMonth]);
    return 0;
}
