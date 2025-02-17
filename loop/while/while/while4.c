//
//  while4.c
//  while
//
//  Created by 정동하 on 1/21/25.
//

#include <stdio.h>
int main_t4(void)
{
    int count;
    
    if(scanf("%d", &count) != 1 ) {
        printf("입력 오류 \n");
        return 1;
    }
    
     
    while (count > 0)   // 초기값이 공백
    {
        printf(" Hello C ! %d\n", count);
        count --;
    }
    
    return 0;
}
