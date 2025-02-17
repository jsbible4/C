//
//  do_while2.c
//  do_while
//
//  Created by 정동하 on 1/21/25.
//

#include <stdio.h>
int main_t3(void)
{
    int i = 100;
    do           //100부터 1까지 감소하면서 100번 반복
    {
        printf("Hello world %d! \n", i);
        i--;
    } while ( i > 0);
    
    return 0;
}
