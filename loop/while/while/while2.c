//
//  while2.c
//  while
//
//  Created by 정동하 on 1/21/25.
//

#include <stdio.h>

int main_t2(void)
{
    int i = 100;
    while ( i > 0)           //100부터 1까지 감소하면서 100번 반복
    {
        printf("Hello world %d! \n", i);
        i--;
    }
    
    return 0;
}
