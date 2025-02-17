//
//  struct_definition.c
//  Pointer_string_struct_IO
//
//  Created by 정동하 on 1/27/25.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NAME_LENGTH 10
#define GRADE_LENGTH 6
#include <string.h>         // 문자열에 관련된 헤더파일(strcpy)


// 구조체 정의 => 여러개의 변수들의 묶음 => 사용자 정의 자료형 만듦
struct student
{
    char name [NAME_LENGTH];
    int age;
    char grade[GRADE_LENGTH];
};


int main_ttt1(void)
{
    // 구조체 변수 선언
    struct student st1, st2;
    
    // 구조체 변수 초기화
    // 구조체변수.멤버 = 할당값
    st1.age = 25;
  //  st1.name = "이순신";       // 배열명 name은 상수포인터이기 때문에 그냥 문자열 할당 불가능.
    strcpy(st1.name, "이순신");  // 문자열 복사. strcpy()는 문자열 리터럴의 내용을 배열에 복사함. direct로 할당이 불가능해서 이렇게 한 거임.
    strcpy(st1.grade, "1학년");  // "1학년"이라는 문자열 리터럴의 내용을 st1.grade 배열 메모리 복사함.
    

    st2.age = 28;
    strcpy(st2.name, "신사임당");
    strcpy(st2.grade, "2학년");
    
    printf("\n 당신의 이름은 %s이며, 학년은 %s입니다. \n", st1.name, st1.grade);
    printf("당신의 나이는 %d입니다.\n, ", st1.age);
    printf("\n 당신의 이름은 %s이며, 학년은 %s입니다. \n", st2.name, st2.grade);
    printf("당신의 나이는 %d입니다.\n, ", st2.age);
    
    return 0;
}

/*
 
 name, grade 는 배열
 ==> 문자열을 저장할 공간을 직접 가지고
 고정된 크기로 크기변경이 불가능하고
 주소 변경이 불가능하다 (== 상수 포인터로 기능)
 
 직접 할당 ===> 오류 발생
 
 
*/
