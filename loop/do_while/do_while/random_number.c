//
//  random_number.c
//  do_while
//
//  Created by 정동하 on 1/21/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//int main(void)
//{
//    
//    srand((unsigned int)time(NULL));        // 양수로 캐스팅을 해서 seed 값을 적용한다.
//    
//    
//    int answer = rand() % 100;
//    int i = 0;
//    char conti;
//    
//    while (i < 6)
//    {
//        int try;
//        printf(" 숫자를 알아맞춰 보세요 ! : ");
//        if (scanf("%d", &try) != 1)
//        {
//            printf("Error \n");
//            return 1;
//        }
//        
//        if ( try == answer )
//        {
//            printf("%d 로 정답입니다. ! \n", answer);
//            break;
//        }
//        else
//            if ( try < answer)
//            {
//                printf("정답은 %d 보다 큰 수 입니다. \n", try);
//                
//                printf("그만 맞추고 싶으시면 Q 나 q를 눌러주세요 : ");
//                
//                return 1;
//            }
//        
//            else
//            {
//                printf("정답은 %d 보다 작은 수 입니다. \n", try);
//                return 1;
//            }
//        i++;
//    }
//    
//
//    return 0;
//}

int main(void)
{
    int answer, in;
    int i = 0;
    char conti;
    
    srand((unsigned int)time(NULL));        // 양수로 캐스팅을 해서 seed 값을 적용한다.
    
    do
    {
        system("cls");          //clear 명령을 써주면 리셋된다. 화면 지우기
        answer = rand() % 100 + 1;          //1 에서 100 사이의 값
        printf(" 숫자를 알아맞춰 보세요 ! : \n\n");
        
        for (i = 1; i <= 5; i++)
        {
            printf("\n[%d번째 도전] \n", i);
            printf("1~100 입력 : [   ]q   \b\b\b\b");
            if (scanf("%d", &in) != 1)
            {
                printf("Error. 숫자를 입력하세요. \n");
                while (getchar() != '\n')    // 버퍼
                i--;                    // 숫자 맞추기 도전 기회 복구
                continue;
                
            }
            while (getchar() != '\n');
            
            /* 두 번째 while (getchar() != '\n')의 필요성
                scanf("%d", &in)가 성공적으로 정수 입력을 받아도, 사용자 입력의 마지막에 엔터 키(\n)가 버퍼에 남아 있을 수 있습니다.
                남은 엔터 키를 제거하지 않으면 다음 입력을 받을 때 문제가 생길 수 있습니다.
                따라서 정수 입력 후에도 입력 버퍼를 완전히 비우는 작업이 필요합니다.
             */

            
            if (answer > in)
                printf("정답은 %d보다 큰 수 입니다. \n", in);
            else if (answer < in)
                printf("정답은 %d보다 작은 수 입니다. \n", in);
            else
            {
                printf(" 정답입니다. !!! ");
                break;
            }
            
        }
        
        
        if ( i == 6 )
        {
            printf("\n\n 5번의 도전기회를 모두 소진했습니다. \n");
            printf("정답은 [%d]입니다.\n", answer);
        }
        
        printf("\n\n 도전 한번 더(아무키) /종료 (Q/q) \n");
        conti = getchar();
        
    } while ( conti != 'Q' && conti != 'q');
    

    return 0;
}
