#include <stdio.h>
#include <stdlib.h>
/*
时间：2017年1月3日12:44:40
目的：测试自己会不会敲，结果发现可以改善程序，不需要函数的嵌套
*/
int main()
{
    void swap(int *q1, int *q2);
    int a, b, c;
    int *p1, *p2, *p3;

    printf("Please input three integer numbers:\n");
    scanf("%d,%d,%d",&a,&b,&c);

    p1 = &a;
    p2 = &b;
    p3 = &c;

    if(a < b) swap(p1, p2);
    if(a < c) swap(p1, p3);
    if(b < c) swap(p2, p3);


    printf("%d %d %d\n",a,b,c);

    return 0;
}
    void swap(int *q1, int *q2)
    {
        int temp;
        temp = *q1;
        *q1 = *q2;
        *q2 = temp;
    }
