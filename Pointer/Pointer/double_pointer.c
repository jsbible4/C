//
//  double_pointer.c
//  Pointer
//
//  Created by 정동하 on 1/22/25.
//

#include <stdio.h>
int main(void)
{
    int * numPtr1;              // 단일 포인터 선언
    int ** numPtr2;             // 이중 포인터 선언
    
    int num1 = 10;
    
    numPtr1 = &num1;            // num1의 메모리 주소를 저장
    numPtr2 = &numPtr1;
    /*왜 &numPtr1가 필요한가?
     numPtr1 자체가 int num1의 주소를 저장하는 포인터입니다.
     그러나 numPtr2는 단순히 numPtr1의 값이 아니라, numPtr1의 메모리 주소를 가리켜야 합니다.
     비유적으로 설명
     num1은 집입니다.
     numPtr1은 집의 주소를 적어둔 종이입니다.
     numPtr2는 그 종이가 어디에 놓여 있는지를 기록한 메모입니다.
     numPtr2가 numPtr1의 주소를 저장하기 위해서는 & 연산자로 numPtr1의 위치를 알아야 합니다.*/
    
    printf("%d\n", **numPtr2);
//    int* numPtr3 = 0x1000000;
//    printf("%d\n", *numPtr3);
//      ?????? 알아보셈 이 부분 잘 모르겠으니깐
    
//    //⚠ int* numPtr3 = 0x1000000; 이 부분이 위험한 이유:
//    0x1000000은 임의의 메모리 주소를 의미함
//    하지만 이 주소는 프로그램이 사용할 수 있는 유효한 주소인지 모름
//    대부분의 OS(운영체제)는 임의의 주소 접근을 막기 때문에 Segmentation Fault 발생 가능

    return 0;
}
