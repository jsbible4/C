//
//  pointer_variable2.c
//  Pointer2
//
//  Created by 정동하 on 1/23/25.
//

#include <stdio.h>

int main_t4(void)
{
    int* p;
    int i = 3, j;
    
    
    p = &i;
    j = *p;         // 3
    j++;            // 4
    
    printf("%d\n", *p);
    printf("%p\n", p);
    printf("%d\n", j);
    
    printf("\n");
    p = &j;
    printf("%p\n", p);
    
    printf("\n");
    *p += 3;
    printf("derefer %d\n", *p);
    printf("%d\n", i);
    printf("%d\n", j);
    return 0;
}

/* i의 값이 바뀌지 않는 이유
 
 j에 *p의 값(즉, i의 값)을 복사하므로, j는 3이 됩니다.
 이후 j++로 j는 4로 증가하지만, 이는 j의 값만 변경됩니다. 이 과정에서 i의 값은 바뀌지 않습니다.
 
 
 *numPtr을 통해 값을 변경하면, 이는 numPtr이 참조하고 있는 **메모리 주소에 저장된 값(즉, num)**을 직접 변경합니다. 따라서 복사가 아니라 참조를 통해 값을 다루기 때문에 num의 값이 바뀌는 것입니다.
(/Users/jeongdongha/Desktop/Notes/Notes/Notes/Pointer/Pointer 의 예시와 비교)
*/
