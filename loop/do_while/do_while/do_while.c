//
//  do_while.c
//  do_while
//
//  Created by 정동하 on 1/21/25.
//

#include <stdio.h>

int main_t1(void)
{
    int i = 0;    // 반복에 사용할 변수 i 를 선언하고 0으로 초기화
    
    do
    {
        printf("Hello, World!\n");
        i ++;
    } while (i <= 100);
        
    return 0;
}
