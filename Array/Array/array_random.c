//
//  array_random.c
//  Array
//
//  Created by 정동하 on 1/23/25.
//

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


// 크기가 100인 MegaIT 배열에 랜덤하게 대문자로 초기화하여 저장하시오.
#define MEGA_IT 100         // 미리 100으로 선언
#include <stdlib.h>
#include <time.h>


int main(void)
{
    char alphabet[MEGA_IT];
    int i;
    char searchChar;
    int count;
    
    srand((unsigned int)time(NULL));            // 양의 정수로 난수 생성     // 현재 시간을 시드로 사용, 난수 생성기 초기화
    printf("\n\n 대문자를 랜덤하게 100개 저장하고 출력하시오 \n\n");
    for(i = 0; i < MEGA_IT; i++)
    {
        alphabet[i] = rand() % 26 + 65;         //65~90 사이의 값 랜덤 발생 (A 부터 Z 까지 랜덤한 대문자 할당)
        printf("%4c", alphabet[i] );
        
        if (i % 10 == 9 )               // 10번째 숫자마다 줄바꿈
            puts("");
            
        
    }
    
    
    do
    {
        printf("\n\n 검색 문자 입력하기 : ");
        if (scanf("%c", &searchChar) != 1)
        {
            printf("입력 오류입니다. \n");
            return 1;
        }
        while (getchar() != '\n' );                //enter 칠 때까지 입력받겠다는 뜻
    } while (searchChar < 'A' || searchChar > 'Z');
    
    count = 0;
    for(i = 0; i < MEGA_IT; i++)
    {
        if(alphabet[i] == searchChar)
            count += 1;
    }
    
    printf("\n\n 검색한 문자 %c의 개수는 : %d개 입니다.\n\n", searchChar, count);
    
    return 0;
}
