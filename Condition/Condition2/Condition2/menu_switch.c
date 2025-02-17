//
//  menu_switch.c
//  Condition2
//
//  Created by 정동하 on 1/20/25.
//

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
    char menu;
    printf("메뉴 코드 입력 (대문자로 입력하세요): ");
    
    if (scanf("%c", &menu) != 1)
    {
        printf("Error \n");
        return 1;
    }
    
    if (menu >= 'a' && menu  <= 'z') // 입력이 소문자인지 확인
    {
        char uppercase = menu - ('a'-'A');
        printf("변환된 문자 : %c \n", uppercase);
    }
    else if (menu >= 'A' && menu  <= 'Z') {
        printf("입력한 문자 : %c \n", menu);
    }
    else {
        printf("입력한 문자는 소문자가 아닙니다. \n");
    }
    
    switch (menu) {
        case 'F':
            printf("File Menu\n");
            break;
        case 'E' :
            printf("Edit Menu\n");
            break;
        case 'H' :
            printf("Help Menu\n");
            break;
            
        default:
            printf("Error Menu\n");
            break;
    }
    return 0;
}
