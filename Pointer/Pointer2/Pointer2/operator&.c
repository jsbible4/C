//
//  operator&.c
//  Pointer2
//
//  Created by 정동하 on 1/23/25.
//

#include <stdio.h>


int main_t1(void)
{
    char c = 'a';
    int i = 3;
    double d = 3.14;
    
    printf("c = %d\n", c);          //ASCII 값 출력
    printf("i = %d\n", i);
    printf("d = %.2f\n", d);        // 소수점 2째 자리까지 출력
    
    printf("c = %p\n", &c);
    printf("i = %p\n", &i);
    printf("d = %p\n", &d);
    
    return 0;
}
