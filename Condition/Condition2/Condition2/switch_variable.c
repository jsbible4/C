//
//  switch_variable.c
//  Condition2
//
//  Created by 정동하 on 1/20/25.
//

#include <stdio.h>


int main_t6(void)
{
    int num;
    if (scanf("%d", &num) != 1) {
        printf("입력 오류 \n");
        return 1;
    }
    switch (num) {
        case 1:
        {
            int num2 = num;
            printf("%d입니다. \n", num2);
            break;
        }                                       // 중괄호로 묶어주면 된다.
        case 2:
            printf("1 또는 2 입니다. \n");
            break;
        
        default:
            printf("default 입니다. \n");

    }
    return 0;

}
