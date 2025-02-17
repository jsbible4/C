//
//  char_arrays_pointers.c
//  Pointer_string_struct_IO
//
//  Created by 정동하 on 1/27/25.
//

#include <stdio.h>
int main_tt2(void)
{
    char str[] = "apple";       // 배열을 이용하여 문자열 처리
    char* sp = "straberry";     // 포인터를 이용하여 문자열 처리
    int i;
    
    printf("%s\n", str);
    printf("%s\n", sp);
    
    for(i = 0; str[i] != '\0' ; i++)        // 널 문자 이전까지 반복
        str[i] -= 32;         // 대문자로 변환
    
    printf("\n%s\n", str);          // 문자열을 배열로 처리했을 때 그 내용에 대해서 수정이 가능하다.
    
    for(i = 0; sp[i] != '\0' ; i++)        // 널 문자 이전까지 반복
//        sp[i] -= 32;         // 대문자로 변환 안됨 => 포인터는 수정 불가능
    
    printf("\n%s\n\n", sp);         // 문자열을 포인터로 처리했을 대 그 내용에 대해서는 수정이 불가능하다.
    
    return 0;
}
