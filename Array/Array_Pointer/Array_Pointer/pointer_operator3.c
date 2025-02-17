//
//  pointer_operator3.c
//  Array_Pointer
//
//  Created by 정동하 on 1/24/25.
//

#include <stdio.h>


int main(void)
{
    int a[] = { 10, 20, 30, 40, 50 };
    int i, j = 10;
    int * ptr;
    
    ptr = a;
    for(i = 0; i < 5; i++)
        printf("%d ", *ptr++);      //*ptr ptr++가 결합된 형태        10 20 30 40 50
    printf("\n");
    
    ptr = a;
    
    for(i = 0; i < 5; i++)
        printf("%d ", *++ptr);      //++ptr *ptr가 결합된 형태        20 30 40 50 1
    printf("\n");
    
    ptr = a;
    for(i = 0; i < 5; i++)
        printf("%d ", ++*ptr);      // ++a[i]           11 12 13 14 15
    printf("\n");
    
    ptr = a;
    for(i = 0; i < 5; i++, j+= 10)
        a[i] = j;       // 10, 20, 30, 40, 50
    
    ptr = a;
    for(i = 0; i < 5; i++)
        printf("%d ", (*ptr)++);        // 10 11 12 13 14
    printf("\n");
   
    
    
    return 0;
}
