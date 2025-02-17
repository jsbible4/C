//
//  char.c
//  Variable2
//
//  Created by 정동하 on 1/20/25.
//

#include <stdio.h>


int main(void)
{
    char ch1 = 'a';
    char ch2 = 'b';
    
    printf("%c, %d\n", ch1, ch1);  //a, 97 : a의 ASCIi 코드값은 97
    printf("%c, %d\n", ch2, ch2);
    
    printf("%c %d\n", 'a' + 1, 'a' + 1);
    return 0;
    
}
