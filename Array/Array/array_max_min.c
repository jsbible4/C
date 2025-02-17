//
//  array_max_min.c
//  Array
//
//  Created by 정동하 on 1/23/25.
//

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


// 5 개의 정수를 입력받아서 그 중 최대값과 최소값을 구하시오.

int main_t3(void)
{
    int i;
    int arr[5];
    int min;
    int max;
    
    printf("최대와 최소값을 구하시오\n");
    
    for(i = 0; i < 5; i++)
    {
        
        if(scanf("%d", &arr[i]) != 1)       //????? arr 자체가 주소번지 가리킨다믄서 왜 &이거 붙이는거이 ㅁ?
            
        {
            printf("입력 오류입니다.\n");
            return 1;
        }
        
    }
    max = min = arr[0];             // 첫번째 값을 최대값과 최소값으로 초기화 함
    for(i = 1; i < 5; i++)
    {
        if (max < arr[i])       // arr[i]의 값이 max보다 크다면
            max = arr[i];
        if (min > arr[i])
            min = arr[i];
        
    }
    
    
    printf("\n==================\n");
    printf("최대값 : %d\n", max);
    printf("최소값 : %d\n", min);
    
    return 0;
}
