#include <stdio.h>
#include <stdlib.h>
/*
ʱ�䣺2017��1��3��07:27:00
Ŀ�ģ���Ҫ�󱻵��������βθı����������������Ҫͨ��ָ��
*/
int main()
{
    void swap(/*int * p1, int * p2*/int x, int y);
    int a, b;
    //int * pointer_1, * pointer_2;

    printf("please enter a and b:\n");
    scanf("%d,%d",&a,&b);

    /*
    pointer_1 = &a;
    pointer_2 = &b;
    */
    if(a<b) swap(/*pointer_1,pointer_2*/a,b);

    printf("max = %d,min = %d\n",a,b);

    return 0;
}

void swap(/*int * p1, int * p2*/int x, int y )
{
    /*int temp;

    temp = * p1;
    * p1 = * p2;
    * p2 = temp;
    */
    int temp;
    temp = x;
    x = y;
    y= temp;
}
