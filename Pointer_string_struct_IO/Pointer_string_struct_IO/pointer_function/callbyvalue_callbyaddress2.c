//
//  callbyvalue_callbyaddress2.c
//  Pointer_string_struct_IO
//
//  Created by 정동하 on 1/27/25.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

void toUpperCase(char * p);

int main_t2(void)
{
    char ch;
    printf("알파벳 소문 입력 : ");
    if(scanf("%c", &ch) != 1|| !islower(ch)) {
        printf("입력 오류입니다. \n");
        return 1;
    }
    while (getchar() != '\n');
    /*3. while (getchar() != '\n');의 동작 원리
     getchar()는 한 글자씩 입력을 읽는 함수.
     '\n'이 나올 때까지 계속 읽어 버림(버퍼 비우기).
     c
     복사
     편집
     while (getchar() != '\n');
     입력 버퍼에 '\n'이 있을 때 → getchar()가 읽고 버림.
     버퍼에 더 이상 '\n'이 없을 때 → 루프 종료.
*/
    
    toUpperCase(&ch);
    printf("결과는 %c입니다.\n", ch);
    
    return 0;
}

void toUpperCase(char* p){
    if(*p >= 'a' && *p <= 'z')
        *p -= 32;
}



/*1. C의 scanf()와 Python의 input() 차이
 C (scanf)    Python (input)
 입력 방식    표준 입력 버퍼에서 필요한 만큼만 가져옴    한 줄(\n 포함)을 통째로 읽음
 개행 문자 처리    scanf("%c")는 한 글자만 읽고, \n은 버퍼에 남김    input()은 개행 문자 포함 전체 입력을 가져옴
 2. C에서 버퍼 비우기가 필요한 이유
 C에서 scanf("%c", &ch);를 사용하면, 한 글자만 읽고 나머지는 입력 버퍼에 남겨둡니다.
 ==> 한 글자를 쓰고 엔터치면 다음에 입력받아야 할 값에 엔터가 들어가는거임. 

 c

 입력: a↵  (사용자가 'a' 입력 후 Enter)
 scanf("%c", &ch); → ch = 'a', 하지만 \n은 버퍼에 남음.
 이후 또 scanf("%c", &ch);를 하면 남아 있던 \n이 자동으로 입력됨.
 그래서 while (getchar() != '\n');을 써서 \n을 버려야 함.
 
 3. Python에서는 버퍼 문제가 발생하지 않음
 Python의 input()은 사용자가 Enter를 누를 때까지 한 줄을 전부 읽고, \n을 자동으로 제거합니다.

 
 ch = input("알파벳 소문 입력: ")
 🟢 예제 (Python에서는 문제 없음)

 입력: a↵  (사용자가 'a' 입력 후 Enter)
 input()이 'a\n'을 전부 읽고, 자동으로 \n 제거.
 ch = 'a'로 정상 저장됨.
 버퍼에 \n이 남지 않으므로, 추가 정리가 필요 없음.
 
 4. 결론
 ✅ Python에서는 input()이 한 번에 모든 입력을 가져오고 개행 문자(\n)를 자동으로 제거하므로 버퍼를 비울 필요가 없다!
 🚀 반면, C는 scanf("%c", &ch)처럼 한 글자만 읽고 나머지는 버퍼에 남겨두기 때문에 while (getchar() != '\n');가 필요함.

*/
