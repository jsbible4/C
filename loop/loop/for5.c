//
//  for5.c
//  loop
//
//  Created by 정동하 on 1/21/25.
//

#include <stdio.h>
int main_t5(void)
{
    int count;
    
    if(scanf("%d", &count) != 1 ) {
        printf("입력 오류 \n");
        return 1;
    }
    
////    for (int i = count; i > 0 ; i--) {
//        printf(" Hello C ! %d\n", i );
//    }
    for ( ; count > 0  ; count --)   // 초기값이 공백
        printf(" Hello C ! %d\n", count);
    
    return 0;
}
