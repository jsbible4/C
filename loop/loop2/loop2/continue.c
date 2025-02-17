//
//  continue.c
//  loop2
//
//  Created by 정동하 on 1/22/25.
//

#include <stdio.h>

int main_t2(void)
{
    for(int i = 1; i < 101 ; i++)
    {
        if(i % 2 != 0)
            continue;           // 홀수는 print가 안되게 걸어주는 것.
        
        printf("%d\n", i );
        
    }
    
    return 0;
}
