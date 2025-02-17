//
//  if3.c
//  Condition
//
//  Created by 정동하 on 2/1/25.
//

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

/*
 나이 입력 :
 
 만약에 65세 이상인 경우 0원입니다.
 자이로드롭 입장료는 2500원 입니다.
 
 예)
 나이입력 : 30
 자이로드롭 입장료는 2500원 입니다.
 
 나이입력 : 65
 자이로드롭 입장료는 0원 입니다.
 */

int main(void)
{
    int age;
    
        printf("나이 입력 : ");
        
        if(scanf("%d", &age) != 1)
        {
            printf("입력 오류입니다. 0또는 양의 정수를 입력해주세요! ");
            return 1;               // return 1;: 오류 발생 (일반적인 오류 코드)
        }
        
        if(age >= 65)
        {
            printf("자이로드롭 입장료는 0원 입니다. \n");
            return 0;
        }
        else
        {
            printf("자이로드롭 입장료는 2500원 입니다. \n");
            return 0;
        }
    
    
    
    
    return 0;
}
