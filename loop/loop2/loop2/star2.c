//
//  star2.c
//  loop2
//
//  Created by 정동하 on 1/22/25.
//

#include <stdio.h>
int main(void)
{
    for(int i = 0; i < 5 ; i++)     // 바깥쪽 루프 (세로 방향)
    {
        for(int j = 0; j < 5 ; j++)     // 안쪽 루프 (가로 방향)
        {
            if (j == i )
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}


