//
//  score.c
//  Condition2
//
//  Created by 정동하 on 1/20/25.
//


#include <stdio.h>

// 국영수 각 점수를 입력 받아 평균을 구한 후
// 평균이 90점 이상 => A
// B80
// C70
// D60
// E 나머지

int main_t2(void)
{
    int kor, eng, math;
    double avg;
    char grade;
    
    printf("당신의 국어, 영어, 수학 점수를 입력하세요(공백 구분 입력) : ");
    
    if (scanf("%d %d %d", &kor, &eng, &math) != 3) {
        printf("입력 오류\n");
        return 1;
    }
    
    avg = (double)(kor + eng + math) / 3 ;  // = 이거 기준 왼쪽이 double이기 때문에 왼쪽 기준으로 자료형 맞춰줌
    if (avg < 60)
        grade = 'E';
    else
        if (avg < 70)
            grade = 'D';
        else
            if (avg < 80)
                grade = 'C';
            else
                if ( avg < 90)
                    grade = 'B';
                else
                    grade = 'A';
    printf("평균 : %.2f, %c 학점 \n", avg, grade);

    return 0;
    
}
