#include <stdio.h>
#include <stdlib.h>
/*
2017年1月3日07:22:42
*/
int main()
{
    void swap(int *p1, int *p2);

    int a, b;
    int * pointer_1, * pointer_2;

    printf("please input two different integer numbers:\n");
    scanf("%d,%d",&a,&b);

    pointer_1 = &a;
    pointer_2 = &b;

    if (a<b) swap(pointer_1, pointer_2);

    printf("a = %d,b = %d\n",a,b);
    return 0;
}

    void swap(int *p1, int *p2)
    {
     int temp;
     temp = * p1;
     *p1 = *p2;
     *p2 = temp;
    }
/*
反思：1.主调函数的函数申明要有分号，被调函数不需要
      2.整个主调函数都在大括弧内，被调函数只有函数体在最大括弧内，定义形参在大括弧外
*/
