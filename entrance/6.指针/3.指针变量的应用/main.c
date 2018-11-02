#include <stdio.h>
#include <stdlib.h>
/*
2017年1月2日19:14:16
*/
int main()
{
    int *p1, *p2, *p, a, b;

    printf("please enter two integer numbers:\n");
    scanf("%d,%d",&a,&b);

    p1 = &a;
    p2 = &b;

    if(a < b)
    {
       /*
        p = p1;
        p1 = p2;
        p2 = p;
        */
        p1 = &b;//可以直接给p1。p2赋新值
        p2 = &a;
    }

    printf("a = %d,b = %d\n",a,b);
    printf("max = %d,min = %d\n",*p1,*p2);

    return 0;
}
/*
反思：
1.scanf("%d,%d"&a,&b)
运行时注意输入时要用英文输入法的, 而不是，
2.用指针变量交换两个数字，交换的不是数字，而是数字的地址
*/
