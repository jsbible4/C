//
//  const.c
//  Variable
//
//  Created by 정동하 on 1/20/25.
//

#include <stdio.h>

int main_tt3(void)
{
    const int con1 = 1; // 상수 선언과 동시에 초기화
    const float con2 = 0.1f;
    const char con3 = 'a';
    
    //con1 = 2;         // 상수에 값을 할당하면 컴파일 에러 발생
    printf("%d %f %c\n", con1, con2, con3);
    return 0;
}
