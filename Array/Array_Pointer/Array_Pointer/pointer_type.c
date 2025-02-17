//
//  pointer_type.c
//  Array_Pointer
//
//  Created by 정동하 on 1/24/25.
//

#include <stdio.h>
int main_t2(void)
{
    int a[3] = {1, 2, 3};
    int * ptr;
    
    ptr = a;        // 상수 포인터이기 때문에 & 없이 써도 가능.
    
    printf("%d, %d, %d\n", a[0], a[1], a[2]);
    printf("%d, %d, %d\n", ptr[0], ptr[1], ptr[2]);
    
    printf("%p, %p, %p\n", (void*)&a[0], (void*)&a[1], (void*)&a[2]);
    printf("%p, %p, %p\n", (void*)ptr[0], (void*)ptr[1], (void*)ptr[2]);
    return 0;
}
