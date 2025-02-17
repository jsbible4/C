//
//  arrayname_pointer.c
//  Array_Pointer
//
//  Created by 정동하 on 1/24/25.
//

#include <stdio.h>
int main_t1(void)
{
    int a[5] = {1, 2, 3, 4, 5};
    
    printf("%d, %d \n", a[0], a[1]);
    printf("%p, %p \n", (void*)&a[0], (void*)&a[1]);  //printf() 에서 포인터를 출력할 때 void* 타입 요구함.
    printf("%p \n", a);   // 개별적인 요소를 출력하는 게 아니라서 & 필요 없음 . // 배열명 == 1번째 요소의 주소 // 배열명 == 상수 포인터이다.
    
    
    return 0;
}



