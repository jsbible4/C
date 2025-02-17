//
//  Variable_Address.c
//  Variable
//
//  Created by 정동하 on 1/20/25.
//


#include <stdio.h>

int main_tt1(void)
{
    char ch = 'a';
    int n = 1;
    double d = 1.0;
    
    printf("ch 변수의 주소 = %p\n", &ch);
    printf("n 변수의 주소 = %p\n", &n);
    printf("d 변수의 주소 = %p\n", &d);
    return 0;
}
