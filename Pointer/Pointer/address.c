//
//  address.c
//  Pointer
//
//  Created by 정동하 on 1/22/25.
//

#include <stdio.h>
int main_t1(void)
{
    int* numPtr;            // 포인터 변수 선언 ( 자료형* 포인터이름)
    int num = 10;
    
    numPtr = &num;
    printf("%p\n", numPtr);     // 포인터 변수 numPtr의 값 출력

    printf("%p\n", &num);        //p -> Num 의 메모리 주소를 출력 (컴퓨터마다, 실행할 때마다 달라짐)
    
    
    return 0;
}
