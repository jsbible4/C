//
//  for.c
//  loop
//
//  Created by 정동하 on 1/20/25.
//

#include <stdio.h>
int main_t1(void)
{
        // 반복에 사용할 변수 i 를 선언하고 0으로 초기화
    for(int i = 0; i < 100; i ++)       // 한 번 반복할 때 마다 i를 1씩 증가시킴 (++)
    {               // i 가 100 보다 작을 때까지만 반복
        printf("Hello, World!\n");
        
    }
    return 0;
}
