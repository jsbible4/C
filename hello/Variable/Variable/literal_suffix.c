//
//  literal_suffix.c
//  Variable
//
//  Created by 정동하 on 1/20/25.
//

#include <stdio.h>

int main_tt4(void)
{
    printf("0%lo\n", 017L);         //  long 크기의 8진수 정수 리터럴
    printf("0%lo\n", 017UL);        //unsigned long 크기의 8진수 정수 리터럴
    printf("0x%lX\n", 0x7FFFFFL);   // long 크기의 16진수 정수 리터럴
    printf("0x%lX\n", 0x7FFFFFUL);  // unsigned long 크기의 16진수 정수 리터럴
    return 0;
}
