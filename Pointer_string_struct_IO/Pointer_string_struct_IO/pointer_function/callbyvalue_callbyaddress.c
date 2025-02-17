//
//  main.c
//  Pointer_string_struct_IO
//
//  Created by 정동하 on 1/27/25.
//

#include <stdio.h>


void changeVal(int x, int y);           //함수 정의 
void changeRef(int* p1, int* p2);

int main_t1(void)
{
    int a = 3, b = 5;
    
    changeVal(a, b);        //Call by value
    printf("changeVal함수 호출 후 %d %d\n", a, b);           //값이 안 바뀜
    
    changeRef(&a, &b);
    printf("changeRef함수 호출 후 %d %d\n", a, b);           // 값이 바뀜
    return 0;
}


void changeVal(int x, int y){       // a, b의 복사본 x, y
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void changeRef(int* p1, int* p2)        // a, b를 가리키고 있는 포인터 p1, p2
{
    int temp;
    temp = *p1;             //p1이 가리키는 값을 temp에 저장
    *p1 = *p2;               //p2가 가리키는 값을 p1이 가리키ㅡㄴ 값에 저장
    *p2 = temp;             // temp를 p2가 가리키고 있는 값에 저장
    
}
