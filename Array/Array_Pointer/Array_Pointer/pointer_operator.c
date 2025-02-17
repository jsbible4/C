//
//  pointer_operator.c
//  Array_Pointer
//
//  Created by 정동하 on 1/24/25.
//

#include <stdio.h>
int main_t3(void)
{
    char c = 'a';           //1바이트
    int i = 3;              //4바이트
    double d = 3.14;        //8바이트
    
    char* cp = &c;
    int* ip = &i;
    double* dp = &d;
    
    printf("%p, %p, %p \n", (void*)cp, (void*)ip, (void*)dp);
    
    cp++; ip++; dp++;
    printf("%p, %p, %p \n", (void*)cp, (void*)ip, (void*)dp);
    printf("%c, %d, %.2f \n", c, i, d);             //배열명은 배열전체를 대표하는 상수포인터이므로 증감연산을 할 수 없다.
    return 0;
}
