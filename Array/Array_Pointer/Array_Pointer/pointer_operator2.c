//
//  pointer_operator2.c
//  Array_Pointer
//
//  Created by 정동하 on 1/24/25.
//

#include <stdio.h>
int main_t4(void)
{
    /*
     배열 이름 => (배열의 시작 주소만을 가리킬 수 있는) 포인터 상수
     포인터 => 포인터 변수
     */
    
    int * p, a[5] = {10, 20, 30, 40, 50};
    
    p = a;
    
    printf("%p\n", a);
    printf("%d\n", *p);
    printf("%d\n", *(p+1));             //4바이트만큼 값이 띄워져서 할당되어있음
    printf("%d\n", p[2]);
    printf("%d\n\n", *(a + 2));
    
    p = p + 2;
//    a = a + 2;            배열 이름은 상수이기 때문에 변경이 불가하다.
//    이름에다가 다른 값을 할당하는 것이 불가능.
    
    p = a + 2;
    
    printf("%p\n", a);
    printf("%d\n", *p);
    printf("%d\n", *(p+2));
    printf("%d\n", *(p-1));
    printf("%d\n", *p + 2);
    
    return 0;
}
