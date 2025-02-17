//
//  do_while3.c
//  do_while
//
//  Created by 정동하 on 1/21/25.
//

#include <stdio.h>
int main_3(void)
{
    int count;
    
    if(scanf("%d", &count) != 1 ) {
        printf("입력 오류 \n");
        return 1;
    }
    
    int i = 0;
    do {
        printf(" Hello C ! %d\n", i );
        i++;
    } while ( i < count);
    
    return 0;
}
