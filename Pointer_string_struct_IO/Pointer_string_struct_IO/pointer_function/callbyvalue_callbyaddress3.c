//
//  callbyvalue_callbyaddress3.c
//  Pointer_string_struct_IO
//
//  Created by 정동하 on 1/27/25.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void getGrade(int score, char* pGrade)
{
    if(score <= 100 && score >= 90)
        *pGrade = 'A';
    else if (score >= 80)
        *pGrade = 'B';
    else if (score >= 70)
        *pGrade = 'C';
    else if (score >= 60)
        *pGrade = 'D';
    else
        *pGrade = 'E';
}

int main_t3(void)
{
    int score;
    char grade;
    printf("점수 입력 : ");
    if(scanf("%d", &score) != 1)
    {
        printf("입력 오류입니다. ");
        return 1;
    }
    
    getGrade(score, &grade);
    
    printf("입력 받은 점수의 등급은 %c 입니다. \n", grade);
    
    return 0;
}
