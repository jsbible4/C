//
//  menu.c
//  Condition2
//
//  Created by 정동하 on 1/20/25.
//


/*
 문자를 입력 받아 아래처럼 메시지를 출력하시요.
 F, f 입력 시 : File Menu
 E, e 입력 시 : Edit Menu
 H, h 입력 시 : Help Menu
 그 밖의 입력 시 : Erro
 
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_t7(void)
{
    char menu;
    printf("메뉴 코드 입력 : ");
    
    if (scanf("%c", &menu) != 1)
    {
        printf("Error \n");
        return 1;
    }
    if(menu == 'F' || menu == 'f')
        printf("File Menu\n");
    else if (menu == 'E' || menu == 'e')
        printf("Edit Menu\n");
    else if (menu == 'H' || menu == 'h')
        printf("Help Menu\n");
    else
        printf("Error Menu\n");
    
    return 0;
}
