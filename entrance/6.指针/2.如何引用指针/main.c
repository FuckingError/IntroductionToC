#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int * a;
    a = &i;
    * a = 1;
    printf("i = %d\n",i);
    return 0;
}
/*
反思：相当于 i = 1
*/
