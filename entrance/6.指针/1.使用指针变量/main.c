#include <stdio.h>
#include <stdlib.h>
/*
2017��1��2��15:34:47
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
��˼��*i���Եģ���Ϊ�����ۣ�д��* i
*/
