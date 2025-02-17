//
//  for2.c
//  loop
//
//  Created by 정동하 on 1/21/25.
//

#include <stdio.h>
//1~10까지의 합을 구해보자

int main_t2(void)
{
    int i;
    int sum = 0;
    
    for ( i = 1; i < 11; i++)
    {
        sum += i;
        printf("i = %d \n", i);
        
    }
    printf("1부터 10까지의 합 : %d  \n", sum);

    return 0;
}
