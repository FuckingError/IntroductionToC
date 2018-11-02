#include <stdio.h>
#include <stdlib.h>
/*
时间：2017年1月3日07:46:38
*/
int main()
{
    void swap(int *p1,int *p2);
    int a, b;
    int * pointer_1,* pointer_2;

    printf("Please input two different integer numbers:\n");
    scanf("%d,%d",&a,&b);

    pointer_1 = &a;
    pointer_2 = &b;

    if (a < b) swap(pointer_1,pointer_2);

    printf("max = %d,min = %d\n",a,b);

    return 0;
}
    void swap(int *p1,int *p2)
    {
        int *p;
        p = p1;
        p1 = p2;
        p2 = p;
    }
/*
反思：结构：swap(int *p1,int *P2) 指针前要有类型
      语言：C语言中实参变量和形参变量之间的数据传递是单向的值传递方式。用指针变作函数参数时同样遵循这一规则。不可能通过执行调用函数来改变实参指针变量的值，但是可以改变实参指针变量所指变量的值。
*/
