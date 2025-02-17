//
//  structor_array.c
//  Pointer_string_struct_IO
//
//  Created by 정동하 on 1/27/25.
//

/*
gets_s(s[i].name, STUDEND_LENGTH) : 입력함수
한도 내에서 입력받을 수 있는 함수
 - 첫번째 매개변수 : 입력받을 버퍼의 주소
 - 두번째 매개변수 : 입력받을 수 있는 최대 길이
 - 입력받은 문자열 끝에 자동으로 '\0' (널 문자)를 추가함
 
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define STUDENT_LENGTH 3
#define NAME_LENGTH 100
#include <stdlib.h>
#include <string.h>
typedef struct score
{
    char name[NAME_LENGTH];         //3바이트
    int kor, eng, math;             //4바이트 3개
    double avg;                     //8바이트
    
} score;


int main_ttt2(void)
{
    // 구조체 배열
    struct score s[STUDENT_LENGTH];         // 구조체 변수명 여러명 선언 (3개)
    for(int i = 0; i <STUDENT_LENGTH; i++ )
    {
        system("cls");      // 기존 시스템에 있는 화면 정보 지우기 (clear = cls)
        printf("\n %d번째 학생 정보 입력 \n", i+1);         // scanf는 입력값에 대한 사이즈가 정해진 게 아님. 오류나기가 쉽다. 구조체의 사이즈만큼 입력값을 받아낼 수 있는 함수가 따로 필요함.
        printf("이름: ");
//        gets_s(s[i].name, NAME_LENGTH);    XCODE 에서는 gets를 지원하지 않음 !!
        
        if (fgets(s[i].name, NAME_LENGTH, stdin) != NULL) {
                    s[i].name[strcspn(s[i].name, "\n")] = 0; // 개행 문자 제거
                }
        s[i].name[strcspn(s[i].name, "\n")] = 0;

        
        printf("국어 영어 수학 점수 입력(공백으로 구분해서 연속 입력): ");
        if(scanf("%d %d %d", &s[i].kor, &s[i].eng, &s[i].math) != 3)
        {
            printf("입력 오류입니다. \n");
            return 1;
        }
        while (getchar() != '\n');
        
    }
    
    system("cls");
    
    printf("\n\t\t 학생 점수 리스트 \n\n");
    printf("%-20s %8s %8s %8s %8s\n", "이름", "국어", "영어", "수학", "평균");    // 왼쪽 정렬 크기 20
    for ( int i = 0; i < STUDENT_LENGTH; i++)
    {
        printf("%-20s %8d %8d %8d %8.2f\n", s[i].name, s[i].kor, s[i].eng, s[i].math, s[i].avg);
        
    }
    return 0;
}

/*✅ #define을 사용하면 유지보수가 쉬워지고 코드 가독성이 좋아짐
 ✅ 한 곳에서 변경하면 전체 코드에 반영되므로 실수할 가능성이 줄어듦
 ✅ 코드의 의미를 직관적으로 표현할 수 있음
 🚀 즉, #define을 사용하면 "좋은 코드"가 됨!*/



//xcode 에서는 한계가...ㅇㅇ...

