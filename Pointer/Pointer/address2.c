//
//  address2.c
//  Pointer
//
//  Created by 정동하 on 1/22/25.
//

#include <stdio.h>
int main_t3(void)
{
    long long *numPtr1;     // long long 형 포인터 선언
    float *numPtr2;         // float 형 포인터 선언
    char *chPtr1;           // char 형 포인터 선언
    
    long long num1 = 10;
    float num2 = 3.5f;
    char ch1 = 'a';
    
    
    numPtr1 = &num1;        // num1의 메모리 주소 저장
    numPtr2 = &num2;        // num2의 메모리 주소 저장
    chPtr1 = &ch1;          // ch1의 메모리 주소 저장
    
    printf("%lld\n", *numPtr1);         // 10
    printf("%f\n", *numPtr2);           // 3.5
    printf("%c\n", *chPtr1);            // a
    
    
    return 0;
}
