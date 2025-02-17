//
//  break.c
//  loop2
//
//  Created by 정동하 on 1/22/25.
//

#include <stdio.h>
int main_t1(void)
{
    int num = 0;
    
    while (1) {
        num++;
        
        printf("%d\n", num);
        if(num == 100)
            break;          // 반복문을 끝냄. while의 제어흐름을 벗어남
    }
    
    return 0;
}
