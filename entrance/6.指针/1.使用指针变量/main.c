#include <stdio.h>
#include <stdlib.h>
/*
2017年1月2日15:34:47
*/
int main()
{
    int a = 100,b = 10;
    int * pointer_1, * pointer_2;
    pointer_1 = &a;
    pointer_2 = &b;
    printf("a = %d,b = %d\n",a,b);
    printf("* pointer_1 = %d,* pointer_2 = %d\n",*pointer_1,*pointer_2);
    return 0;
}
/*
反思：*i可以的，但为了美观，写成* i
*/
