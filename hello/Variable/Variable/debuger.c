//
//  debuger.c
//  Variable
//
//  Created by 정동하 on 1/20/25.
//

#include <stdio.h>
int main_tt6(void)
{
    int num1 = 10;
    int num2 = 20;
    int num3 = 30;
    
    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%d\n", num3);
    return 0;
}

/*
 왜 'b'가 나오는지 요약:
 'a' + 1은 숫자로 계산되며, 이는 'b'의 ASCII 값(98)과 같습니다.
 %c는 ASCII 값을 문자로 변환해서 출력하므로 'b'가 출력됩니다.
 */
