//
//  while3.c
//  while
//
//  Created by 정동하 on 1/21/25.
//

#include <stdio.h>
int main_t3(void)
{
    int count;
    
    if(scanf("%d", &count) != 1 ) {
        printf("입력 오류 \n");
        return 1;
    }
    
    int i = 0;
    while ( i < count) {
        printf(" Hello C ! %d\n", i );
        i++;
    }
    
    return 0;
}

