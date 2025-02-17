//
//  uppercase_lowercasre.c
//  Notes
//
//  Created by 정동하 on 1/20/25.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_t1(void)
{
    char input;
    printf("소문자를 입력하세요 : ");
    if (scanf("%c", &input) != 1)      // 내가 입력한 값이 input에 저장됨.
        
/*2. 문자가 연산 가능한 이유
         char 타입은 실제로 숫자(정수)로 저장됩니다.
         C 언어에서는 문자와 숫자 간의 변환이 암시적으로 처리됩니다.
         예: 'a'는 ASCII 값 97로 저장되며, 'A'는 ASCII 값 65로 저장됩니다.
         따라서, input - ('a' - 'A')와 같은 연산은 정수 간 연산으로 처리됩니다.
*/
        
    {      printf("입력 오류가 발생했씁니다.\n")  ;
        return 1;    //오류 발생시 프로그램 종료
    }
    
    if (input >= 'a' && input  <= 'z') // 입력이 소문자인지 확인
    {
        char uppercase = input - ('a'-'A');
        printf("변환된 문자 : %c \n", uppercase);
    }
    else if (input >= 'A' && input  <= 'Z') {
        char lowercase = input + ('a'+'A');
        printf("변환된 문자 : %c \n", lowercase);
    }
    else {
        printf("입력한 문자는 소문자가 아닙니다. \n");
    }
    
    
    return 0;
}
